#include<stdio.h>
int maze(int n,int m){
    int right_ways=0;
    int down_ways=0;
    if(n==1 &&m==1) return 1;
    if(n==1 &&m>1){
        right_ways+=maze(n,m-1);
    }
    if(n>1 &&m==1){
        down_ways+=maze(n-1,m);
    }
    if(n>1 && m>1){
       right_ways+=maze(n,m-1);
        down_ways+=maze(n-1,m);
    }
    int total_ways=right_ways+down_ways;
    return total_ways;
}
    int main(){
    int n;
    printf("enter the number of rows of maze:");
    scanf("%d",&n);
    int m;
    printf("enter the number of column of maze:");
    scanf("%d",&m);
    int no_of_ways=maze(n,m);
    printf("%d", no_of_ways);
    return 0;
}
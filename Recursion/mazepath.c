#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int right_ways=0;
    int down_ways=0;
    if(cr==er && cc==ec){
        return 1;
    }
    if(cr==er){//only right ways call
        right_ways+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){//only down ways call
        down_ways+=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec ){
        right_ways+=maze(cr,cc+1,er,ec);
        down_ways+=maze(cr+1,cc,er,ec);
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
    int no_of_ways=maze(1,1,n,m);
    printf("%d", no_of_ways);
    return 0;
}
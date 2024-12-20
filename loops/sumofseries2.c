#include<stdio.h>
int main(){
     int n;
    printf("enter the number of term:");
    scanf("%d",&n);
    if(n%2!=0){
        printf("%d",(1+n)/2);
    }
    else{
        printf("%d",-n/2);
    }
    return 0;
}
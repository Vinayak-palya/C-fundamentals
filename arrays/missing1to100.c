#include<stdio.h>
int main(){
    int sum=0,sum2;
    sum2=0;
    int arr[99];
    for(int i=0;i<99;i++){
        printf("enter element no. %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=98;i++){
        sum=sum+arr[i];
    }
    for(int i=1;i<=100;i++){
        sum2=sum2+i;
    }
    printf("%d is the missing element of an given array",sum2-sum);
    return 0;
}
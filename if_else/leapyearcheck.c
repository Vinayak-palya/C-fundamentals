#include<stdio.h>
int main(){
    int year ;
    printf("enter year :");
    scanf("%d",&year);
    if(year%4==0){
        printf("LEAP YEAR");
    }
    else{
        printf("NOT A LEAP YEAR");
    }
    return 0;
}
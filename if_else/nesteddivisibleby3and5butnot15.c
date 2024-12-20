#include<stdio.h>
int main(){
    int x;
    printf("enter the number");// priority of && > || (concept of hiearchy)
    scanf("%d",&x);
    if(x%15!=0){
        if(x%3==0 || x%5==0){
            printf("number div by 3 or 5 but not by 15");
        }
    else{
        printf("neither div by 15 nor 3 or 5");
    }
    }
    else{
        printf("div by 15");
    }
}

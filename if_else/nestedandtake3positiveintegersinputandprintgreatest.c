#include<stdio.h>
int main(){
    int a;
    printf("enter 1st number:");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number:");
    scanf("%d",&b);
    int c;
    printf("enter 3rd number:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is greatest:%d",a);
        }
        else{
            printf("c is greatest:%d",c);
        }
    }
    else{
        if(b>c){
            printf("%d is greatest",b);
        }
        else{
            printf("%d is geatest",c);
        }
    }
    return 0;
}
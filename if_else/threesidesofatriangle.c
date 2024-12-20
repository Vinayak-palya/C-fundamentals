#include<stdio.h>
int main(){
    int a;
    printf("enter 1st side:");
    scanf("%d",&a);
    int b;
    printf("enter 2nd side :");
    scanf("%d",&b);
    int c;
    printf("enter 3rd number :");
    scanf("%d",&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("it can form the sides of the triangle");
    }
    else{
        printf("it cannot form the sides of the triangle");
    }
    return 0;
}
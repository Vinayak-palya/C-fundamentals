#include<stdio.h>
int main(){
    int a;
    printf("enter 1st number");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number");
    scanf("%d",&b);
    int c=b;
    b=a;
    a=c;
    printf("%d  %d",a,b);
    return 0;
}
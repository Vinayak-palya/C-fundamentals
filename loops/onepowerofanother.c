#include<stdio.h>
int main(){
    int a;
    printf("enter first number");
    scanf("%d",&a);
    int b;
    printf("enter the second number");
    scanf("%d",&b);
    int p=1;
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    printf("%d",p);
    return 0;
}
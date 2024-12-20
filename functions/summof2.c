#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a;
    printf("enter the 1st number");
    scanf("%d",&a);
    int b;
    printf("enter the 2nd number");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}
#include<stdio.h>
int main(){
    int a= 5;
    int* x= &a;
    *x=7;
    printf("%d\n",a);
   
    return 0;
}
//printf("%p",x);>adddress stored in x;
//printf("5p",&x);>address of x;
//printf("5d",*x);value stored in address stored in x; 
#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
int a=2;
int b=9;
// int* x=&a;
// int* y=&b;
swap(&a,&b);
printf("%d\n%d",a,b);
    return 0;
}
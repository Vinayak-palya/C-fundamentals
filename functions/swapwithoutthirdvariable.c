#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return ;
}
int main(){
    int a;
printf("enter 1st number");
scanf("%d",&a);
int  b;
printf("enter 2nd number");
scanf("%d",&b);
// a=a+b;
// b=a-b;
// a=a-b;
swap(a,b); 
printf("%d  %d",a,b);
    return 0;
}
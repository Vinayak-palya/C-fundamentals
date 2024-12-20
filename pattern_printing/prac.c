#include<stdio.h>
int main(){
   long int n,d=0,b=1;
    printf("enter an binary number:");
    scanf("%ld",&n);
    while(n!=0){
        int rem =n%10;
    d+=rem*b;
    n/=10;
    b*=2;
    }
    printf("%ld",d);
    return 0;
}
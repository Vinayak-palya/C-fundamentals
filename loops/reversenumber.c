#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int r=0;
    while(n!=0){
     r=r*10+n%10;
     n=n/10;
    }
    printf("%d\n",r);
    printf("%d",n);
    return 0;
}
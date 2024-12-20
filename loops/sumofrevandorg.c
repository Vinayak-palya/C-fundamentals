#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int r=0;
    int x=n;
    while(n!=0){
     r=r*10+n%10;
     n=n/10;
    } 
    int sum=x+r;                    
    printf("%d\n",sum);
    
    return 0;
}
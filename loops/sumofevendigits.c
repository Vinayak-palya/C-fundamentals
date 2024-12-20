#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int s2=0;
    while(n!=0){
    if(n%2==0){
        s2=s2+n%10;
    }    
    n=n/10;
    }
    printf("%d is the sum of even digits of a number",s2);
    return 0;  
}
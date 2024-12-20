#include<stdio.h>
int sum(int n){
    if(n==0) return 0;
    int s=n;
   s=s+sum(n-1);
    
    return s;
}
int main(){
     int n;
    printf("enter the number:");
    scanf("%d",&n);
     int s=sum(n);
    printf("%d",s);
    return 0;
}
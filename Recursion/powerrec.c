#include<stdio.h>
int power(int a,int b){
    int x;
    if(b==1)return a;
    if(b==0)return 1;
    else if(b%2==0 && b!=0){
      x= power(a,b/2)*power(a,b/2);
    }
    else if(b%2!=0){
       x=power(a,(b+1)/2)*power(a,(b-1)/2);
    }
    return x;
}
int main(){
    int a,b;
    printf("enter base:");
    scanf("%d",&a);
    printf("enter power:");
    scanf("%d",&b);
    int ans=power(a,b);
    printf("%d raised to power %d is %d",a,b,ans);
    return 0;
}
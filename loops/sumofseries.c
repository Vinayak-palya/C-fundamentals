#include<stdio.h>
int main(){
    int n;
    printf("enter the number of term:");
    scanf("%d",&n);
    int i=1;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
        i=i+1;
    }
    printf("%d",sum);
    return 0;
}
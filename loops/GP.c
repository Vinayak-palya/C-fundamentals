#include<stdio.h>
int main(){
    int a=1;
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=2*a;
    }
    return 0;
}
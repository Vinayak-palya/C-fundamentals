#include<stdio.h>
int main(){
    int a=3;
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=4*a;
    }
    return 0;
}
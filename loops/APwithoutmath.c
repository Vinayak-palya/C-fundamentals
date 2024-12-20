#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    // 4,7,10,13,16 and so on
    int a=4;
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a+3;
    }
    return 0;
}
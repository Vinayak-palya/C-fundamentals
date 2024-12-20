#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of rows :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int b=i-1;
        int a=1;
        for(int j=1;j<=n-i+1;j++){//spaces ke liye ek loop 
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",a);
            a++;
        }
        for(int m=1;m<=i-1;m++){
            printf("%d ",b);
            b--;
        }
        printf("\n");
    }
    return 0;
}
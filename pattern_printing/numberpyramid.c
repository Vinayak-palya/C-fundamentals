#include<stdio.h>
int main(){
     int n;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n-i+1;j++){
            printf("  ");
        }
        for( int k=1;k<=2*i-1;k++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
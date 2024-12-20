#include<stdio.h>
int main(){
     int n;
    printf("enter tne no. of rows:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
           printf("%d ",a);
           a++; 
        }
        printf("\n");
    }
    // int a;
    // printf("%d",a);
    return 0;
}
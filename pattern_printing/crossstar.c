#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j=j+1){
            if(j==i || j==n-i+1){
                printf("*");
            } 
            else{
                printf(" ");
            }       
        }
        printf("\n");
    }
    return 0;
}
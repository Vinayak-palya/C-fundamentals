#include<stdio.h>
int main(){
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);
    for(int i=0;i<=r-1;i++){
        for(int j=1;j<=r-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
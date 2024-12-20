#include<stdio.h>
int main(){
    int r;
    printf("enter no. of rows in a matrix:");
    scanf("%d",&r);
    int c;
    printf("enter no. of column in a matrix:");
    scanf("%d",&c);
    int arr[r][c];
    printf("\nEnter elemt of matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&arr[i][j]);
        }
        printf("\n");
    }
    // wave print 
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
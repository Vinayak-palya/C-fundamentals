#include<stdio.h>
int main(){
    //1 2
    //3 4
    int r;`
    printf("enter no. of rows");
    scanf("%d",&r);
    int c;
    printf("enter the no. of columns");
    scanf("%d",&c);
    int arr[r][c];//9 total elments
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&arr[i][j]);
        }    
    }
    printf("\n");
    
    int sum=0;
    
   for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           sum+=arr[i][j];
        }    
    }
    printf("the sum of the given matrix is %d",sum);
    return 0;
}
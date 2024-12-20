#include<stdio.h>
int main(){
    //1 2
    //3 4
    int r;
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
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
//    arr[0][0]=1;
//    arr[0][1]=1;
//    arr[1][0]=1;
//    arr[1][1]=1;   
    return 0;
}
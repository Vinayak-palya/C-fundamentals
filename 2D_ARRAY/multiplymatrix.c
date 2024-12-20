#include<stdio.h>
int main(){
    int r1,r2,c1,c2;
    printf("enter no. of rows fo 1st and 2nd matrix:");
    scanf("%d %d",&r1,&r2);
    
    printf("enter no. of columns of 1st and 2nd matrix:");
    scanf("%d %d",&c1,&c2);
   if(c1!=r1){
    printf("invalid");
   }
   else{
     int arr[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d ",&arr[i][j]);
        }
        printf("\n");
    }
    //c1 should be equal to r2
  
   
    int brr[r2][c2];
    
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d ",&brr[i][j]);
        }
        printf("\n");
    }
    int res[r1][c2];
    for(int i =0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c1;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d  ",res[i][j]);

        }
        printf("\n");
        }
    }
    return 0;
}
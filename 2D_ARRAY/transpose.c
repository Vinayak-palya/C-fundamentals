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
    int brr[c][r];
    printf("\n");
   for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
        //   printf(" %d",arr[j][i]);
        brr[i][j]=arr[j][i];
        }    
        printf("\n");
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
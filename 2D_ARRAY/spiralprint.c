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
    // spiral print 
    int minr=0,maxr=r-1,minc=0,maxc=c-1;
    int tne=r*c;
    int count=0;
    while(count<tne){
        //print minimum rows
        for(int j=minc;j<=maxc;j++){
            printf("%d",arr[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne) break;
        //print the max column
        for(int i=minr;i<maxr;i++){
            printf("%d",arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;
        //printthe maximumrow
        for(int j=maxc;j>=minc;j++){
            printf("%d",arr[max][j]);
            count++;
        }
        maxr--;
        if(count>=tne) break;
        //print the minimum column
        for (int i=maxr;i>=minr;i--){
            printf("%d",arr[i][minc]);
            count++;
        }
        minc++;
        if(count>=tne) break;
    }
    return 0;
}
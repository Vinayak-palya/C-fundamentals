#include<stdio.h>
int main(){
    int n;
    printf("enter the size of matrix:");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
           
        }
        
    }
    //rotate
 
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
             //swap arr[i][j]and arr[i][k]
            int tamp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=tamp;
            j++;
            k--;
        }
    }
   
    
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
           
        }
        printf("\n");
    }
    
    return 0;
}
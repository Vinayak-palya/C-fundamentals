#include<stdio.h>
int main(){
    int arr[5]={2,3,1,7,4};
    for(int i=0;i<=4;i++){
        printf("%d",arr[i]);
    }
    int n=5;//n is size of array
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
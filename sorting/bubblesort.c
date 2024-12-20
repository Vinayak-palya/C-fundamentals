#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        bool flag=true;//array is not sorted yet
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag=false;
            }
        }
        if(flag==true){
            break;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
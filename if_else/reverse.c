#include<stdio.h>
void reverse(int arr[],int a,int b){
    int i=a;
    int j=b;
     
    while(i<j){
        //arr[i] and arr[j];
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr,2,5);
    // for(int i=1,j=4;i<=j;i++,j--){
    //     int temp= arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    // }
    for(int i=0;i<=6;i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}
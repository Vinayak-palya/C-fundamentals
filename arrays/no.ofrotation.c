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
    int k;
    printf("no. of rotation");
    scanf("%d",&k);
    k=k%7;
    reverse(arr,0,6);
    reverse(arr,0,k-1);
    reverse(arr,k,7-1);
   for(int i=0;i<7;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
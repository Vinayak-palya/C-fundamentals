#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int k;
    printf("no. of rotation");
    scanf("%d",&k);
    int j;

    for(int i=0;i<k;i++){
        j=arr[6];
       
       for(int l=5;l>=0;l--){
       
        arr[l+1]=arr[l];
       }
        arr[0]=j;
    }
    for(int i=0;i<7;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={1,-5,2,-3,6,-19,-4};
    int max=INT_MIN;//sabse chota number
    int smax=INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        elseif(smax,arr[i] && max!=arr[i]){
            smax=arr[i];
        }  
    }
    // for(int j=0;j<=6;j++){
    //     if(smax<arr[j] && arr[j]!=max){
    //         smax=arr[j];
    //     } 
    // }
    printf("%d",smax);
    return 0;
}
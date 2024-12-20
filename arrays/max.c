#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={-1,-5,2,-3,-6,-19,-4};
    int max=INT_MIN;//sabse chota number
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
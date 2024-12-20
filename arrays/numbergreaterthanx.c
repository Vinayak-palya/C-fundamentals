#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,8,6};
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    int g=0;
    for(int i=0;i<7;i++){
        if(arr[i]>x){
            g=g+1;
        }
    }
    printf("%d",g);
    return 0;
}
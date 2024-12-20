#include<stdio.h>
// void fun(int x[]){
//    int temp =x[0];
//    x[0]=x[1];
//    x[1]=temp;
//     return ;
// }
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    // int a=4;
        for(int i =0;i<=6;i++){
            if(i%2!=0)arr[i]=2*arr[i];
            else arr[i]=arr[i]+10;
        }
         for(int i =0;i<=6;i++){
           printf("%d\n",arr[i]);
        }
    return 0;
}
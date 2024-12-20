#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
    for(int i=0,j=4;i<j;i++,j--){
        if(arr[i]!=arr[j]){
            printf("it is  nota palindrome\n");
            break;
        }
        else{
            printf("it is a a palindrome \n ");
            
        }
       
    }
    
    return 0;
}
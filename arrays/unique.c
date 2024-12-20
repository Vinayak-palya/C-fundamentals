#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,1,2,4,3,2,3};
    for(int i=0;i<7;i++){
        bool flag =false;
        for(int j=0;j<7;j++){
            if( (j!=i) && (arr[i]==arr[j])){
                flag =true;
               
            }
            
        }
        if(flag== false){
            printf("%d",arr[i]);
            break;
        }   
         }
    return 0;
}
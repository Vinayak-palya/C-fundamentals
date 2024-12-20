#include<stdio.h>
int main(){
    int R;//age of ram
    printf("enter age of ram :");
    scanf("%d",&R);
    int S;//age of shyam
    printf("enter age of shyam :");
    scanf("%d",&S);
    int A;//age of ajay
    printf("enter age of ajay :");
    scanf("%d",&A);
    if(A<R && A<S){
        printf("Ajay is youngest :%d",A);
    }
    if(R<A && R<S){
        printf("Ram is the youngest : %d",R);
    }
    if(S<A && S<R){
        printf("Shyam is youngest :%d",S);
    }
    else{
        printf("\n all are of same age");
    }
    return 0;
}
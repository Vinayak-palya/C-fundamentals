#include<stdio.h>
int main(){
    int n;
    printf("enter no. of stars in side:");
    scanf("%d",&n);
    for(int i=1;i<=4;i=i+1){
        for(int i=1;i<=4;i++){
        printf("%d",i);}
        printf("\n");
    }

    return 0;
}
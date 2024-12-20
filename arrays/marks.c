#include<stdio.h>
int main(){
    int marks[10];
    for(int i=0;i<=9;i++){
        printf("printf marks of student nu. %d:",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<=9;i++){
        if( marks[i]<35){
            printf("%d is the roll no.\n",i+1);
        }

    }
    return 0;
}
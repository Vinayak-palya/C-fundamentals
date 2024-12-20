#include<stdio.h>
int main(){
    int x;
    printf("enter x coordinate:");
    scanf("%d",&x);
    int y;
    printf("enter y coordinate:");
    scanf("%d",&y);
    if(x==0 && y==0){
        printf("point is at origin");
    }
    else if(x!=0 && y==0){
        printf("point is on x axis");
    }
    else if(x==0 && y!=0){
        printf("it is on the y axis");
    }
    else {
        printf("it is not on given position");
    }
    return 0;
}
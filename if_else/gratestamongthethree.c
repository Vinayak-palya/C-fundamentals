#include<stdio.h>
int main(){
    int x;
    printf("enter  number x :");
    scanf("%d",&x);
    int y;
    printf("\n enter number y:");
    scanf("%d",&y);
    int z;
    printf("\n enter  number z:");
    scanf("%d",&z);
    if(x>y && x>z){
    printf("%d is the greatest: ",x);
    }
    if(y>x && y>z){
        printf("y is greatest: %d",y);
    }
    if(z>x && z>y){
        printf("z is greatest: %d",z);
    }
    else{
        printf(" all are equal");
    }
    return 0;
}
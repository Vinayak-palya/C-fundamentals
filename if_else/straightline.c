#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("enter the point x1,");
    printf("\nenter the point y1,");
    printf("\nenter the point x2,");
    printf("\nenter the point y2,");
    printf("\nenter the point x3,");
    printf("\nenter the point y3,");
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    scanf("%d",&x3);
    scanf("%d",&y3);
    if(((x2-x1)/(y2-y1))==((x3-x2)/(y3-y2))){
        printf("all three points lie on a straight line");
    }
    else{
        printf("they do not lie on a straigth line");
    }
    return 0;
}

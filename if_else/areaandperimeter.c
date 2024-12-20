#include<stdio.h>
int main(){
   float l;
   printf("length of thr rectangle is :");
   scanf("%f",&l);
   float b;
   printf("Breadth of the rectangle is :");
   scanf("%f",&b);
   if(l*b>2*(l+b)){
    printf("area > perimeter");
   }
   if(l*b<2*(l+b)){
    printf("perimeter > area");
   }
   else{
    printf("area = perimeter");
   }
    return 0;
}
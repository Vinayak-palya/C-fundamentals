#include<stdio.h>
int main(){
   float x ;
   printf("ENTER A NUMBER :");
   scanf("%f",&x);
   if(x<0){
    printf("THE ABSOLUTE VALUE IS: %f",x*-1);
   }
   else{
    printf("THE ABSOLUTE VALUEIS: %f",x);
   }
    return 0;
}
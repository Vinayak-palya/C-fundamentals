#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
   //ternary operator
   //exp1 ? exp2 : exp3
   n%2==0 ? printf("even number"): printf("odd number");//generally use in one if else wala code
    return 0;
}
#include<stdio.h>
int main(){
  int x;
  printf("enter the number:");
  scanf("%d",&x);
  if(x%3==0 || x%5==0){
    printf("it is divisible by 3 or 5");
  } 
  else{
    printf("it is not divisible by 3 or 5");
  }
 return 0;
}
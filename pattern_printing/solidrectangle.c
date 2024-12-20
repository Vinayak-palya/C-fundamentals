#include<stdio.h>
int main(){
   int l,b;
   printf("enter no. of * in row:");
   scanf("%d",&l);
   printf("enter no. of * in column:");// outer loops signifies no. opf lines
   scanf("%d",&b);
    for(int i=1;i<=b;i++){
   for(int i=1;i<=l;i++)
  { printf("* ");}
   printf("\n");
    }
    return 0;
}
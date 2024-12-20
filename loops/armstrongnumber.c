#include<stdio.h>
int main(){
   int result;
    for(int i=1;i<=500;i++){
        int x=i%10;
        int y=i/10;
        int z=i/100;
    int r=x*x*x+(y%10)*(y%10)*(y%10)+(z%10)*(z%10)*(z%10);
       if(r==i){    
        printf("%d is the armstrong number\n",i);
       }      
    }
    return 0;
}
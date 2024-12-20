#include<stdio.h>
int main(){
int x ;
printf("Enter cost price:");
scanf("%d",&x);
int y;
printf("Enter sell price:");
scanf("%d",&y);
if(x>y){
    printf("loss of :%d",x-y);
}
 else if(y>x) {
    printf("profit of: %d",y-x);
 }
 else{
    printf("no profit,noloss");
 }
return 0 ;
}
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
   int a=1;
   int b=1;
   int sum=1;
  if(n>2){ printf("%d\n%d\n",a,b);
   for(int i=1;i<=n-2;i++){
     sum=a+b;
    a=b;
    b=sum;
    printf("%d\n",sum);
   }
  }
  else if(n==2){
    printf("%d\n%d\n",a,b);
  }
  else if(n==1){
    printf("%d\n",a);
  }
    return 0;
}
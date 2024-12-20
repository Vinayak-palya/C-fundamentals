#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");//rounds are called as Iteration
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i=i+1){
        if(n%i==0){
            a=1;
            break;
          }
    }
    if(n==1) printf("neither prime nor composite");
    else if(a==1){
        printf("composite number");
    }
    else{
        printf("prime number");
    }
    return 0;
}
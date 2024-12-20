#include <stdio.h>
int main(){
    int n; //nis a positive integer
    printf("ENTER A NUMBER :");
    scanf("%d",&n);
    if(n%5==0){
        printf("n is divisible by 5");
    }
    else{
        printf("n is not divisible by 5");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of lines");
    scanf("%d",&n);
     int nsp=1;
        int nst=n-1;
    for(int i=1;i<=n;i++){
        if(i==1){
        for(int j=1;j<=2*n-1;j++){
            printf("* ");
        }
        }
        else{
            for(int k=1;k<=nst;k++){
                printf("* ");
                
            }
            for(int l=1;l<=nsp;l++){
                printf("  ");
            }
            for(int m=1;m<=nst;m++){
                printf("* ");
            }
            nst--;
            nsp+=2;

            
        }
printf("\n");
    }
    return 0;
}
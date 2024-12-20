#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of lines");
    scanf("%d",&n);
    int nsp=1;
    int nst=n-1;
    int a=2;;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
            printf("%d ",i);
        }
        else{
            printf("%d ",i-a);
            a+=2;
        }
   
       
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=nst;j++){
            printf("%d ",j);
            
        }
        
        for(int k=1;k<=nsp;k++){
            printf("  ");
            
        }
        nsp+=2;
        for(int l=nst;l>=1;l--){
            printf("%d ",l);
            
        }
       nst--;
        printf("\n");
    }
    return 0;
}
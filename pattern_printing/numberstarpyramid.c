// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the no. of lines :");
//     scanf("%d",&n);
//     int nsp=1;
//     int nst=n;
// for(int i=1;i<=2*n+1;i++){
//     printf("%d",i);
// }
// printf("\n");
// for(int i=1;i<=n;i++){
//     int a=1;
//     for(int j=1;j<=nst;j++){
//         printf("%d",a);
//         a++;
//     }
//     for(int k=1;k<=nsp;k++){
//         printf(" ");
//         a++;
//     }
//     for(int j=1;j<=nst;j++){
//         printf("%d",a);
//         a++;
//     }
//     nsp+=2;
//     nst--;
//     printf("\n");
// }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    printf("enter the no. of lines");
    scanf("%d",&n);
     int nsp=1;
        int nst=n-1;
        
    for(int i=1;i<=n;i++){
        int a=1;
        if(i==1){
        for(int j=1;j<=2*n-1;j++){
            printf("%d ",a);
            a++;
        }
        }
        else{
            for(int k=1;k<=nst;k++){
                printf("%d ",a);
                a++;
                
            }
            for(int l=1;l<=nsp;l++){
                printf("  ");
                a++;
            }
            for(int m=1;m<=nst;m++){
                printf("%d ",a);
                a++;
            }
            nst--;
            nsp+=2;

            
        }
printf("\n");
    }
    return 0;
}
#include<stdio.h>
int minimum(int a, int b){
    int min= 0;
    if(b<a) min=b;
    else min=a;
    return min;
}
int main(){
    int n;
    printf("enter the no. of lines:");
    scanf("%d",&n);
     int min=0;
    for(int i=1;i<=2*n-1;i++){
            for(int j=1;j<=2*n-1;j++){
                int a=i;
                if(i>n){a=2*n-i;}
                int b=j;
                if(b>n){b=2*n-j;}
                // min=minimumof a and b
                min = minimum(a,b);
                // if(a<b){
                //     min=a;
                // }
                // else{
                //     min=b;
                // }
                printf("%d ",n-min+1);
           
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int  arr[8]={1,2,3,4,5,6,7,8};
    int p=0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]+arr[j]>=12){
                printf("%d and %d are the pairs\n",arr[i],arr[j]);
                p++;
            }
        }
    }
    printf("%d are the no. of pairs",p);
    return 0;
}

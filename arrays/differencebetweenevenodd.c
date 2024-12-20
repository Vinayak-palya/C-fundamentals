#include<stdio.h>
int main(){
    int arr[7]={1,6,3,9,4,2,7};
    int se=0;
    int so=0;
    for(int i=0;i<7;i++){
        if(i%2==0){
            se=se+arr[i];
        }
        else so=so+arr[i];
    }
    if(se>=so){
        printf("%d",se-so);
    }
    else printf("%d",so-se);
    return 0;
}
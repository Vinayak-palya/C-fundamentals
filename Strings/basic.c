#include<stdio.h>
int main(){
    char str[]={'a','b','c','d','e','!'};
    
    // printf("%p\n",&str[0]);
    // printf("%p\n",&str[1]);
    // printf("%p\n",&str[2]);
    // printf("%p\n",&str[3]);
    // printf("%p\n",&str[4]);
    int i=0;
    while(str[i]!='!'){
        printf("%c",str[i]); 
        i++;
    }
    return 0;
} 
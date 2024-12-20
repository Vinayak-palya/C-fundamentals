#include<stdio.h>//capital letters 
int main(){//what is type casting
    // char ch='A';
    // printf("%c\n",ch);
    // int x=(int)ch;
    // printf("%d\n",x);
    // int x=65;
    // printf("%d\n",x);
    // char ch=(char)x;
    // printf("%c\n",ch);
    for(int i=65;i<=91;i++){
        printf("%d ",i);
        char ch=(char)i;
        printf("%c\n",ch);
    }
    return 0;
}
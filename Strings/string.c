#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]",str);//only the first word is considered
   // gets(str);//entire sentence can be input
    printf("%s",str);
    
   // printf("%s",str);
//    puts(str);
//    puts("hello everyone");
    return 0;
}
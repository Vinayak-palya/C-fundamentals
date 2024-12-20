#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="physics wallah";
    char s2[]="Physics Wallah";
    s2[0]='M';
    printf("%s\n",s1);
    printf("%s",s2);
}
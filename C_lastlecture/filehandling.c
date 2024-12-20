#include<stdio.h>
int main(){
    // FILE* ptr=fopen("vinayak.txt","r");
    // char str[100];
    // if(fgets(str,100,ptr)!=NULL)
    //     printf("%s",str);
    // crating a file
    FILE* ptr=fopen("cW.txt","w");
    char str[]="placement lagegi yahi se";
    fputs(str,ptr);
    fclose(ptr);
}
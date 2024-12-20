#include<stdio.h>
int main(){
    FILE*fp;
    fp=fopen("paper.txt",'a');
    fprintf(fp,"%d",46);
    
    return 0;
}
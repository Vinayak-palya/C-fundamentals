#include<stdio.h>
int main(){
    int x=4;
    int y=--x;
    int z=x--;
    printf("\n%d %d %d",x,y,z);
    return 0;
}
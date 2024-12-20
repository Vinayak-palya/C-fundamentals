#include<stdio.h>
void greet(){
    printf("good morning\n");
    printf("how are you?\n");
    return;
}
int main(){
    greet();//function call
    greet();
    greet();
    return 0;
}
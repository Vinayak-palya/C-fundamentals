#include<stdio.h>
int main(){
    void india(); 
       india();//calling india
    return 0;
}


void india(){
    printf("you are in india\n");
    void australia();
    australia();//calling australia
    return;
}

void australia(){
    printf("you are in australia\n");
    void england();
    england();//calling england
    return;
}
void england(){
    printf("you are in england\n");
    return ;
}
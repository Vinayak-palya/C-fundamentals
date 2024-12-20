#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        char name[50];
        int salary ;
        int age;
    }x,y;
    x.salary=25000;
    x.age=25;
    y.salary=35000;
    y.age=40;
    strcpy(x.name,"pankaj");
    strcpy(y.name,"mohit");
    printf("%s\n",x.name);
    printf("%d",y.age);

    return 0;
}
//elements are stored in continuous fashion or memory location
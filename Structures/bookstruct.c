#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[50];
        float price;
        int no_of_pages;
    }kitab;

    kitab a;
    kitab b;
    kitab c;
    kitab d;
     
    // struct book d;
    // struct book a;
    // struct book b;
    // struct book c;

    a.no_of_pages=100;
    a.price=411.5;
    strcpy(a.name,"secret seven");
    printf("%f\n",a.price);
    printf("%d\n",a.no_of_pages);
    printf("%s\n",a.name);
    b.no_of_pages=200;
    b.price=100.4;
    strcpy(b.name,"Famous five");
    printf("%f\n",b.price);
    printf("%d\n",b.no_of_pages);
    printf("%s\n",b.name);

    return 0;
}
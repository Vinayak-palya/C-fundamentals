#include<stdio.h>
#include<string.h>
int main(){
     typedef struct cricketer{
        int age;
        char name[20];
        float average;
        int noOfmatches;
     }cricketer;
     cricketer arr[3];
     for(int i=0;i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfmatches);
        scanf("%f",&arr[i].average);
     }
     for(int i=0;i<3;i++){
        printf("Name:%s\n",arr[i].name);
        printf("Age:%d\n",arr[i].age);
        printf("noOfmatches:%d\n",arr[i].noOfmatches);
        printf("Average:%f\n\n",arr[i].average);
     }
    return 0;
}
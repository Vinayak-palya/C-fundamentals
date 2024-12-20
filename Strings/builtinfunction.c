#include<stdio.h>
#include<string.h>
int main(){
   char s1[12]="Raghav ";
   char s2[]="garg";
   strcat(s1,s2);
   s2[0]='m';
   printf("%s",s1);
 return 0;
}
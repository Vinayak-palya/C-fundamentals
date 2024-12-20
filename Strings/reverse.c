#include<stdio.h>
#include<string.h>
int main(){
    char str[15];
    puts("enter the string:");
    scanf("%[^\n]",str);
    // gets(str);
   puts("the size is:");//automatically \n bhi de deta hai
   int size =0;
   int k=0;
   while(str[k]!='\0'){
    size++;
    k++;
   }
   printf("%d\n",size);
   for(int i=0,j=size-1;i<=j;i++,j--){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
   }
puts("the reverse string is:");
puts(str);
    return 0;
}
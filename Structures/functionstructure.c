 #include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
 }pokemon;
void fun(pokemon p){
    printf("%d",p.hp);
    return;
}
void change(pokemon p){
 p.hp=70;
 p.attack=70;
 p.speed=110;
 return;
}
int main(){
 pokemon pikachu;
 pikachu.hp=60;
 pikachu.attack=50;
 pikachu.speed=100;
 printf("%d\n",pikachu.hp);
 printf("%d\n",pikachu.attack);
 printf("%d\n",pikachu.speed);
 change(pikachu);
//  fun(pikachu);
printf("%d\n",pikachu.hp);
 printf("%d\n",pikachu.attack);
 printf("%d\n",pikachu.speed);
 change(pikachu);
return 0;
}
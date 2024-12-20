#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
 typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
 }pokemon;
 typedef struct legendarypokemon{
    pokemon normal;
    char ability[10];
 }legendarypokemon;
 legendarypokemon mewtwo;
  strcpy(mewtwo.ability,"pressure");
 mewtwo.normal.hp=150;
 mewtwo.normal.attack=180;
 strcpy(mewtwo.normal.name,"Mewtwo");
 mewtwo.normal.speed=180;
 mewtwo.normal.tier='S'; 
 typedef struct godpokemon{
    legendarypokemon legend;
    int specialattack;
 }godpokemon;

 godpokemon arceus;
 arceus.specialattack=300;
 strcpy(arceus.legend.ability,"turn anyone to stone");
 arceus.legend.normal.attack=500;

    return 0;
}
#include<stdio.h>
int main(){
    struct pokemon{//user defined data types
        int hp;
        int speed;
        int attack;
        char tier;//S,A,B,C,D;
    }pikachu,charizar,mewtwo;
   
    printf("enter attack of pikachu");
    scanf("%d",&pikachu.attack);
    // pikachu.attack =60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
    printf("%d",pikachu.attack);

    
    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='S';

    
    mewtwo.attack=170;
    mewtwo.hp=150;
    mewtwo.speed=200;
    mewtwo.tier='G';

    // printf("%c",charizard.tier);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
  typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[14];
  }pokemon;
    pokemon a[10];
    a[0].attack=343;
    a[0].hp=344;
    a[0].speed=543;
    a[0].tier='g';
    strcpy(a[0].name,"charizard");
    a[1].attack=200;
    a[1].hp=203;
    a[1].speed=534;
    a[1].tier='k';
    strcpy(a[1].name,"meowtow");

    a[2].attack=333;
    a[2].hp=321;
    a[2].speed=343;
    a[2].tier='a';
    strcpy(a[2].name,"pilachu");
    for(int i=0;i<=2;i++){
        printf("%s\n",a[i].name);
        printf("speed : %d\n",a[i].speed);
        printf("HP : %d\n",a[i].hp);
        printf("attack : %d\n",a[i].attack);
        printf("Tier : %c\n",a[i].tier);
    }




    return 0;
}
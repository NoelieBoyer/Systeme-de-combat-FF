#include <stdio.h>

int main(){
  int PointDeVieHero = 100;
  int PointDeVieMob = 25;
  printf("Vous avez %d PV\n", PointDeVieHero);
  printf("Un monstre vous attaque\n");
  printf("Monstre : %d PV\n", PointDeVieMob);
  printf("Vous attaquez le monstre\n");
  printf("-5 PV\n");
  PointDeVieMob=PointDeVieMob-5; 
  printf("Monstre : %d PV\n",PointDeVieMob);


  return 0;
}

#include <stdio.h>

int main(){
  int PointDeVieHero = 100;
  int PointDeVieMob = 25;
  printf("Vous avez %d PV\n", PointDeVieHero);
  printf("Un monstre vous bloque la route !\n");
  printf("Monstre : %d PV\n", PointDeVieMob);
  printf("Vous attaquez le monstre\n");
  PointDeVieMob=PointDeVieMob-5;
  printf("Monstre : %d PV\n",PointDeVieMob);

  while (PointDeVieMob>0) {
    PointDeVieMob=PointDeVieMob-5;
    printf("Monstre : %d PV\n", PointDeVieMob);
  }
  printf("Le monstre est mort ! Vous avez gagne ! \n");
  printf("Vous avez %d PV\n", PointDeVieHero);


  return 0;
}

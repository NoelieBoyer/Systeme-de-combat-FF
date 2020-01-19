#include <stdio.h>

int main(){
  int PointDeVieHero = 100;
  int PointDeVieMob1 = 25;
  int PointDeVieMob2 = 25;
  printf("Vous avez %d PV\n", PointDeVieHero);
  printf("Un monstre vous bloque la route !\n");
  printf("Monstre : %d PV\n", PointDeVieMob1);
  printf("Vous attaquez le monstre\n");
  PointDeVieMob1=PointDeVieMob1-5;
  printf("Monstre : %d PV\n",PointDeVieMob1);

  while (PointDeVieMob1>0) {
    PointDeVieMob1=PointDeVieMob1-5;
    printf("Monstre : %d PV\n", PointDeVieMob1);
  }
  printf("Le monstre est mort ! Vous avez gagne ! \n");
  printf("Vous avez %d PV\n", PointDeVieHero);

  printf("Un monstre vous bloque la route !\n");
  printf("Monstre : %d PV\n", PointDeVieMob2 );
  printf("Vous attaquez le monstre mais il se defend !\n");
  while (PointDeVieMob2>0 && PointDeVieHero>0) {
    PointDeVieMob2=PointDeVieMob2-5;
    PointDeVieHero=PointDeVieHero-25;
    printf("Monstre : %d PV\n", PointDeVieMob2 );
    printf("Joueur : %d PV\n", PointDeVieHero );

    if (PointDeVieHero<=0) {
      printf("Vous etes mort !\n");
    }

  }


  return 0;
}

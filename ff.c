#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  srand(time(NULL)); 
  int PointDeVieHero = 100;
  int PointDeVieMob = 25;
  int Choix;


  printf("Vous avez %d PV\n", PointDeVieHero);
  printf("Un monstre vous bloque la route !\n");
  printf("Monstre : %d PV\n", PointDeVieMob);

  while (PointDeVieMob > 0){
    printf("Que voulez vous faire? Attaque (1) Defense (2)\n" );
    scanf("%d", &Choix);
    if (Choix==1) {
      PointDeVieMob = PointDeVieMob - 5;
      printf("Monstre : %d PV\n", PointDeVieMob);
      printf("Le monstre contre-attaque. Vous subissez 5 degats\n" );
      PointDeVieHero=PointDeVieHero - 5;
      printf("Joueur : %d PV\n",PointDeVieHero );
    }

    if (Choix==2){
      printf("Vous vous couvrez une barriere protectrice, les degats sont reduits\n");
      printf("Le monstre attaque !\n");
      PointDeVieHero=PointDeVieHero-1;
      printf("Joueur : %d PV\n", PointDeVieHero );
    }

  }
  printf("Le monstre est mort ! Vous avez gagne ! \n");


    if (PointDeVieHero <= 0) {
      printf("Vous etes mort !\n");



    }




  return 0;
}

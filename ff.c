#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  //déclaration de variable
  srand(time(NULL));
  int PointDeVieHero = 100;
  int PointDeVieMob = 25;
  int Choix;
  int ChoixMob;


  printf("Vous avez %d PV\n", PointDeVieHero);
  printf("Un monstre vous bloque la route !\n");
  printf("Monstre : %d PV\n", PointDeVieMob);

  while (PointDeVieMob > 0){
    ChoixMob=rand()%2;
    printf("Que voulez vous faire? Attaque (1) Defense (2)\n" );
    scanf("%d", &Choix);
    //attaque joueur
    if (Choix==1) {
      printf("Vous infligez 5 degats\n");
      PointDeVieMob = PointDeVieMob - 5;
      if(PointDeVieMob <= 0){
        printf("Le monstre est mort !\n");
        break;
      } else if(PointDeVieMob >= 0){
        printf("Monstre : %d PV\n", PointDeVieMob );
      }

        //attaque mob
        if (ChoixMob==0) {
          printf("Le monstre contre-attaque ! \n" );
          PointDeVieHero=PointDeVieHero-5;
          if(PointDeVieHero <= 0){
            printf("Le monstre est mort !\n");
            break;
          } else if(PointDeVieHero >= 0){
            printf("Joueur : %d PV\n", PointDeVieHero );
          }
        }
          //defense mob
        else  if (ChoixMob==1) {
            printf("Le monstre se defend ! \n");
            PointDeVieMob=PointDeVieMob-1;
            if(PointDeVieMob <= 0){
              printf("Vous etes morts !\n");
              break;
            } else if(PointDeVieMob >= 0){
              printf("Monstre : %d PV\n", PointDeVieMob );
            }
        }
      }

//defense joueur
    if (Choix==2){
      printf("Vous vous couvrez d'une barriere protectrice, les degats sont reduits\n");
      printf("Joueur : %d PV\n", PointDeVieHero );

        //attaque mob
        if (ChoixMob==0) {
          printf("Le monstre attaque ! \n" );
          PointDeVieHero=PointDeVieHero-1;
          if(PointDeVieHero <= 0){
            printf("Vous etes morts !\n");
            break;
          } else if(PointDeVieHero >= 0){
            printf("Joueur : %d PV\n", PointDeVieHero );
          }
        }
          //defense mob
        else  if (ChoixMob==1) {
            printf("Le monstre se defend ! \n");
            printf("Rien ne se passe...\n");
          }
        }
    }
    return 0;

  }

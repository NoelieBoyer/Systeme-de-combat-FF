#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  //déclaration de variable
  srand(time(NULL));
  int PointDeVieHero = 100;
  int PMHero = 20;
  int PointDeVieMob = 25;
  int PMMob = 20;
  int Choix;
  int ChoixMob;
  bool isMonstrePoison = false;





  printf("Vous avez %d PV. Vous avez %d PM.\n", PointDeVieHero,PMHero);
  printf("Un monstre vous bloque la route !\n");
  printf("Monstre : %d PV\n", PointDeVieMob);

  while (PointDeVieMob > 0){
    ChoixMob=rand()%2;
    printf("Que voulez vous faire? Attaque (1) Defense (2) Poison (3) \n" );
    scanf("%d", &Choix);

    //attaque joueur
    switch (Choix){
      case 1:
      if (PMHero<=20) {
        PMHero++;
      }
      if (isMonstrePoison==true){
        printf("Le monstre prend un degat de poison\n" );
        PointDeVieMob=PointDeVieMob-1;
        if(PointDeVieMob <= 0){
          printf("Le monstre est mort !\n");
          break;
        } else if(PointDeVieMob >= 0){
          printf("Monstre : %d PV\n", PointDeVieMob );
        }
      }

        //attaque mob
        if (ChoixMob==0) {
          printf("Vous infligez 5 degats\n");
          PointDeVieMob = PointDeVieMob - 5;
          if(PointDeVieMob <= 0){
            printf("Le monstre est mort !\n");
            break;
          } else if(PointDeVieMob >= 0){
            printf("Monstre : %d PV\n", PointDeVieMob );
          }
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
            printf("Vous attaquez. Le monstre se defend ! \n");
            PointDeVieMob=PointDeVieMob-1;
            if(PointDeVieMob <= 0){
              printf("Vous etes morts !\n");
              break;
            } else if(PointDeVieMob >= 0){
              printf("Monstre : %d PV\n", PointDeVieMob );
            }
        }
        break;

//defense joueur
    case 2 :
      if (PMHero<=20) {
        PMHero++;
      }
      if (isMonstrePoison==true){
        printf("Le monstre prend un degat de poison\n" );
        PointDeVieMob=PointDeVieMob-1;
        if(PointDeVieMob <= 0){
          printf("Le monstre est mort !\n");
          break;
        } else if(PointDeVieMob >= 0){
          printf("Monstre : %d PV\n", PointDeVieMob );
        }
      }
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
          break;
        //poison joueur
        case 3:

          if (PMHero<=4) {
            printf("Vous n'avez pas assez de PM\n" );
            break;
          } else if (PMHero>=5){
            if (PMHero<=20) {
            PMHero++;
          }
            if (isMonstrePoison==true){
              printf("Le monstre prend un degat de poison\n" );
              PointDeVieMob=PointDeVieMob-1;
              if(PointDeVieMob <= 0){
                printf("Le monstre est mort !\n");
                break;
              } else if(PointDeVieMob >= 0){
                printf("Monstre : %d PV\n", PointDeVieMob );
              }
            }
          printf("Vous lancez un sort de poison. Le monstre est empoisonne \n");
          PointDeVieMob=PointDeVieMob-1;
          isMonstrePoison=true;
          if(PointDeVieMob <= 0){
            printf("Vous etes morts !\n");
            break;
          } else if(PointDeVieMob >= 0){
            printf("Monstre : %d PV\n", PointDeVieMob );
          }
          PMHero=PMHero-5;

            //attaque mob
            if (ChoixMob==0) {
              printf("Le monstre attaque ! \n" );
              PointDeVieHero=PointDeVieHero-5;
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
            break;
            default:
            printf("Veuillez choisir entre les choix possible.\n");
            break;
    }
  }


    return 0;

  }

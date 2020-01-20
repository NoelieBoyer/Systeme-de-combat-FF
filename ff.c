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
  bool isHeroPoison = false;
  
  printf("Vous avez %d PV. Vous avez %d PM.\n", PointDeVieHero,PMHero);
  printf("Un monstre vous bloque la route !\n");
  printf("Monstre : %d PV\n", PointDeVieMob);

  while (PointDeVieMob > 0){
    ChoixMob=rand()%3;
    printf("Que voulez vous faire? Attaque (1) Defense (2) Poison (3) Antidote (4) \n" );
    scanf("%d", &Choix);

    //attaque joueur
    switch (Choix){
      case 1:
      if (PMHero<=20) {
        PMHero++;
      }
      if (PMMob<=20) {
        PMMob++;
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
      if (isHeroPoison==true){
        printf("Vous prenez un degat de poison\n" );
        PointDeVieHero=PointDeVieHero-1;
        if(PointDeVieHero <= 0){
          printf("Vous etes est mort !\n");
          break;
        } else if(PointDeVieHero >= 0){
          printf("Joueur: %d PV\n", PointDeVieHero );
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
              printf("vous etes mort !\n");
              break;
            } else if(PointDeVieMob >= 0){
              printf("Monstre : %d PV\n", PointDeVieMob );
            }
        }
        else  if (ChoixMob==2) {
          if(PMMob <=4){
            printf("Pas assez de magie. oups\n");
            ChoixMob=rand()%2;
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
                  printf("vous etes mort !\n");
                  break;
                } else if(PointDeVieMob >= 0){
                  printf("Monstre : %d PV\n", PointDeVieMob );
                }
            }
          } else if (PMMob >= 5){
            printf("Vous infligez 5 degats\n");
            PointDeVieMob = PointDeVieMob - 5;
            if(PointDeVieMob <= 0){
              printf("Le monstre est mort !\n");
              break;
            } else if(PointDeVieMob >= 0){
              printf("Monstre : %d PV\n", PointDeVieMob );
            }
            printf("Le monstre vous inflige une attaque de poison \n");
            PointDeVieHero=PointDeVieHero-1;
            isHeroPoison=true;
            PMMob=PMMob-5;
            if(PointDeVieHero <= 0){
              printf("vous etes mort !\n");
              break;
            } else if(PointDeVieHero >= 0){
              printf("Joueur : %d PV\n", PointDeVieHero );
            }
          }
        }
        break;

//defense joueur
    case 2 :
      if (PMHero<=20) {
        PMHero++;
      }
      if (PMMob<=20) {
        PMMob++;
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
      if (isHeroPoison==true){
        printf("Vous prenez un degat de poison\n" );
        PointDeVieHero=PointDeVieHero-1;
        if(PointDeVieHero <= 0){
          printf("Vous etes est mort !\n");
          break;
        } else if(PointDeVieHero >= 0){
          printf("Joueur: %d PV\n", PointDeVieHero );
        }
      }
      printf("Vous vous couvrez d'une barriere protectrice, les degats sont reduits\n");
      printf("Joueur : %d PV\n", PointDeVieHero );

        //attaque mob
        if (ChoixMob==0) {
          printf("Le monstre attaque ! \n" );
          PointDeVieHero=PointDeVieHero-1;
          if(PointDeVieHero <= 0){
            printf("vous etes mort !\n");
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

        else  if (ChoixMob==2) {
            if(PMMob <=4){
              printf("Le monstre n'a pas assez de magie. oups\n");
              ChoixMob=rand()%2;
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
                    printf("vous etes mort !\n");
                    break;
                  } else if(PointDeVieMob >= 0){
                    printf("Monstre : %d PV\n", PointDeVieMob );
                  }
              }
            } else if (PMMob >= 5){
              printf("Le monstre vous inflige une attaque de poison \n");
              PointDeVieHero=PointDeVieHero-1;
              isHeroPoison=true;
              PMMob=PMMob-5;
              if(PointDeVieHero <= 0){
                printf("vous etes mort !\n");
                break;
              } else if(PointDeVieHero >= 0){
                printf("Joueur : %d PV\n", PointDeVieHero );
              }
            }
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
          if (PMMob<=20) {
            PMMob++;
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
            if (isHeroPoison==true){
              printf("Vous prenez un degat de poison\n" );
              PointDeVieHero=PointDeVieHero-1;
              if(PointDeVieHero <= 0){
                printf("Vous etes est mort !\n");
                break;
              } else if(PointDeVieHero >= 0){
                printf("Joueur: %d PV\n", PointDeVieHero );
              }
            }
          printf("Vous lancez un sort de poison. Le monstre est empoisonne \n");
          PointDeVieMob=PointDeVieMob-1;
          PMHero=PMHero-5;
          isMonstrePoison=true;
          if(PointDeVieMob <= 0){
            printf("vous etes mort !\n");
            break;
          } else if(PointDeVieMob >= 0){
            printf("Monstre : %d PV\n", PointDeVieMob );
          }

            //attaque mob
            if (ChoixMob==0) {
              printf("Le monstre attaque ! \n" );
              PointDeVieHero=PointDeVieHero-5;
              if(PointDeVieHero <= 0){
                printf("vous etes mort !\n");
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
              else  if (ChoixMob==2) {
                if(PMMob <=4){
                  printf("Pas assez de magie. oups\n");
                  ChoixMob=rand()%2;
                  printf("%d\n",ChoixMob);
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
                        printf("vous etes mort !\n");
                        break;
                      } else if(PointDeVieMob >= 0){
                        printf("Monstre : %d PV\n", PointDeVieMob );
                      }
                  }
                }
                 else if (PMMob >= 5){
                  printf("Le monstre vous inflige une attaque de poison \n");
                  PointDeVieHero=PointDeVieHero-1;
                  isHeroPoison=true;
                  PMMob=PMMob-5;
                  if(PointDeVieHero <= 0){
                    printf("vous etes mort !\n");
                    break;
                  } else if(PointDeVieHero >= 0){
                    printf("Joueur : %d PV\n", PointDeVieHero );
                  }
                }
              }
            }
            break;
            case 4 :
              if (PMHero<=20) {
                PMHero++;
              }
              if (PMMob<=20) {
                PMMob++;
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

              printf("Vous utilisez un sort d'antidote\n");
              isHeroPoison=false;
              PMHero=PMHero-5;

                //attaque mob
                if (ChoixMob==0) {
                  printf("Le monstre attaque ! \n" );
                  PointDeVieHero=PointDeVieHero-1;
                  if(PointDeVieHero <= 0){
                    printf("vous etes mort !\n");
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

                else  if (ChoixMob==2) {
                  printf("Le monstre utilise poison \n");
                  printf("Le héros est insensible au poison ce tour\n");
                      }
                        //defense mob


                  break;



            default:
            printf("Veuillez choisir entre les choix possible.\n");
            break;
          }
    }



    return 0;

  }

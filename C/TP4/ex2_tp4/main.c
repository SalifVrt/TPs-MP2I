/*
VERET Salif
Informatique MP2I
TP4 C - Fonctions et modules
06/10/2022
*/

//Exercice 2


#include <stdio.h>
#include "surface.h"
#include "volume.h"


int afficheMenu(){
    int choix;
    double rayon, hauteur, largeur, longueur;
    double surface, volume;

    printf("Choix du calcul a effectuer\n");
    printf("---------------------------\n");
    printf("\t1 - Surface rectangle\n");
    printf("\t2 - Surface disque\n");
    printf("\t3 - Surface laterale cylindre\n");
    printf("\t4 - Surface sphere\n");
    printf("\t5 - Volume prisme droit\n");
    printf("\t6 - Volume cylindre\n");
    printf("\t7 - Volume cone\n");
    printf("\t8 - Volume sphere\n");

    scanf("%d", &choix);

    switch (choix){
        case 1:
            printf("Largeur :");
            scanf("%lf", &largeur);
            printf("Longueur :");
            scanf("%lf", &longueur);

            surface = rectangle(largeur, longueur);
            printf("La surface du rectangle est de : %.2lf", surface);
            break;

        case 2:
            printf("Rayon :");
            scanf("%lf", &rayon);
            surface = disque(rayon);

            printf("La surface du disque est de : %.2lf", surface);
            break;

        case 3:
            printf("Rayon :");
            scanf("%lf", &rayon);
            printf("Hauteur :");
            scanf("%lf", &hauteur);

            surface = enveloppeCylindre(rayon, hauteur);
            printf("La surface laterale du cyclindre est de : %.2lf", surface);
            break;

        case 4:
            printf("Rayon :");
            scanf("%lf", &rayon);

            surface = surfaceSphere(rayon);
            printf("La surface de la sphere est de : %.2lf", surface);
            break;

        case 5:
            printf("Largeur :");
            scanf("%lf", &largeur);
            printf("Longueur :");
            scanf("%lf", &longueur);
            printf("Hauteur :");
            scanf("%lf", &hauteur);

            volume = volumePrisme(largeur, hauteur, longueur);
            printf("Le volume du prisme est de : %.2lf", volume);
            break;

        case 6:
            printf("Rayon :");
            scanf("%lf", &rayon);
            printf("Hauteur :");
            scanf("%lf", &hauteur);

            volume = volumeCylindre(rayon, hauteur);
            printf("Le volume du cylindre est de : %.2lf", volume);
            break;

        case 7:
            printf("Rayon :");
            scanf("%lf", &rayon);
            printf("Hauteur :");
            scanf("%lf", &hauteur);

            volume = volumeCone(rayon, hauteur);
            printf("Le volume du cone est de : %.2lf", volume);
            break;

        case 8:
            printf("Rayon :");
            scanf("%lf", &rayon);

            volume = volumeSphere(rayon);
            printf("Le volume de la sphere est de : %.2lf", volume);
            break;

        default:
            printf("Votre choix est incorrect, veuillez reessayer.\n");


        }
    return 0;
}

int main(){
    afficheMenu();
    return 0;
}

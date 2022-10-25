/*
TP2 Informatique MP2I
VERET Salif
15/09/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Exercice 3

int main(){
    int autre_partie = 1;

    while (autre_partie == 1){
        int mini = 0, maxi = 100; 
        int nb_mystere, proposition; 
        int compteur = 1;
        srand(time(NULL)); // cette commande ne doit être exécutée qu’une seule fois 
        nb_mystere = (rand() % (maxi - mini + 1)) + mini;

        printf("Entrez un nombre entre 0 et 100 (compris)\n");
        scanf("%d", &proposition);

        while(proposition != nb_mystere && compteur < 10){
            if (nb_mystere < proposition){
                printf("Le nombre est plus petit, il vous reste %d chances\n", 10 - compteur);
                printf("Entrez un nombre entre 0 et 100 (compris)\n");
                scanf("%d", &proposition);
                compteur += 1;
            }
            else{
                printf("Le nombre est plus grand, il vous reste %d chances\n", 10 - compteur);
                printf("Entrez un nombre entre 0 et 100 (compris)\n");
                scanf("%d", &proposition);
                compteur += 1;
            }
        }

        if (proposition == nb_mystere){
            printf("Bravo ! Vous avez trouve le nombre mystere %d en %d essais\n", nb_mystere, compteur);
        }
        else{
            printf("Dommage, le nombre mystere etait %d\n", nb_mystere);
        }

        printf("Voulez-vous faire une autre partie ? Entrez 1 pour oui et 0 pour non\n");
        scanf("%d", &autre_partie);
    }

    return 0;

}

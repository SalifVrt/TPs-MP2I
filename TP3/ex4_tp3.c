/*
VERET Salif
MP2I
TP3 Informatique (C) -- 23/09/2022
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Exercice 4
int main(){
    bool nouveau_test = true;
    int reponse;

    while (nouveau_test){

        char chaine[20];
        int longueur;
        bool palindrome;

        //
        printf("Entrez un mot (20 lettres maximum)\n");
        scanf("%s", &chaine);
        longueur = strlen(chaine);
        printf(" Mot %s de longueur : %d\n", chaine, longueur);
    
        //
        if (longueur == 1){
            palindrome = true;
        }
        else {
            int moitie_longueur;

            if (longueur%2 == 1){
                moitie_longueur = (longueur - 1)/2;
            }
            else{
                moitie_longueur = longueur / 2;
            }

            char partie_inf[10];
            char partie_sup_inv[10];
            partie_inf[moitie_longueur] = '\0';
            partie_sup_inv[moitie_longueur] = '\0';


            for (int i = 0; i < moitie_longueur; i++){
                partie_inf[i] = chaine[i];
                partie_sup_inv[i] = chaine[longueur - i - 1];

            }
            palindrome = (strcmp(partie_inf, partie_sup_inv) == 0);
        }

        if (palindrome){
            printf("Le mot %s est un palindrome\n", chaine);
        }
        else{
            printf("Le mot %s n est pas un palindrome\n", chaine);
        }

        printf("Souhaitez-vous faire un nouveau test <0 pour oui> ?");
        scanf("%d", &reponse);

        if (reponse != 0){
            nouveau_test = false;
        }
    }

    return 0;

}
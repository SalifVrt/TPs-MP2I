/*
VERET Salif
Informatique MP2I
TP4 C - Fonctions et modules
06/10/2022
*/


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Exercice 3

//Prototypes des fonctions
bool recherche(char chaine[], char cherche);
int rechercheMaxi(int tableau[], int n);
char plusFrequent(char chaine[]);


bool recherche(char chaine[], char cherche){
    int n = strlen(chaine), i = 0;
    bool trouve = false;

    while (i < n && !trouve){
        //On parcourt le tableau jusqu'a trouver cherche ou arriver au bout
        if(chaine[i] == cherche){
            trouve = true;
        }
        i++;
    }
    return trouve;
}

int rechercheMaxi(int tableau[], int n){
    int ind_max = 0;
    for(int i = 1; i < n; i++){
        if(tableau[i] > tableau[ind_max]){
            ind_max = i;
        }
    }
    return ind_max;
}

char plusFrequent(char chaine[]){
    char plus_freq;
    int frequence[26];
    int n = strlen(chaine);

    for(int i = 0; i < 26; i++){
        //Initialisation de frequence
        frequence[i] = 0;
    }

    for(int i = 0; i < n; i++){
        //On fait la correspondance entre le code ASCII et l'indice du tableau
        int corresp  = (int)(chaine[i]) - 97;
        frequence[corresp]++;
    }

    plus_freq = (char)(rechercheMaxi(frequence, 26) + 97);

    return plus_freq;
}


int main(){
    //Tests des fonctions
    
    char chaine[20] = "aabbbccddee";

    int tableau[5] = {4, 15, 6, 10, 5};
    int ind_max = rechercheMaxi(tableau, 5);

    char cherche = 'f';
    bool trouve = recherche(chaine, cherche);

    char plus_freq = plusFrequent(chaine);

    if (trouve){
        printf("le caractere est present");
    }
    else{
        printf("le caractere n'est pas present");
    }
    printf("%d\n", ind_max);
    printf("le caractere le plus frequent de cette chaine est %c", plus_freq);
    
    return 0;
}
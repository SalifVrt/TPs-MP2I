/*
VERET Salif
Informatique MP2I
TP5 C - Structures de données
21/10/2022
Exercice 2
*/


#include <stdio.h>
#include <string.h>

//Declaration de l'enumeration
enum jour{
    lundi = 0,
    mardi,
    mercredi,
    jeudi,
    vendredi,
    samedi,
    dimanche
};


int main()
{
    enum jour j;
    float temperatures[7];
    char noms_jours[7][10] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};
    
    //Entree par l'utilisateur des differentes temperatures
    for(int i = lundi; i <= dimanche; i++){
        printf("Quelle est la temperature du %s ?", noms_jours[i]);
        scanf("%f", &temperatures[i]);
    }
    printf("\n\n");

    //Recherche des temperatures maximales et minimales
    int mini = 0, maxi = 0;
    float temp_mini, temp_maxi;
    for (int i = lundi; i <= dimanche; i++){
        if (temperatures[i] < temperatures[mini]){
            mini = i;
        }
        if (temperatures[i] > temperatures[maxi]){
            maxi = i;
        }
    }
    temp_mini = temperatures[mini];
    temp_maxi = temperatures[maxi];

    printf("La temperature minimale de cette semaine : %.1f degres, le %s\n", temp_mini, noms_jours[mini]);
    printf("La temperature maximale de cette semaine : %.1f degres, le %s\n", temp_maxi, noms_jours[maxi]);
    printf("\n\n");
    return 0;
}


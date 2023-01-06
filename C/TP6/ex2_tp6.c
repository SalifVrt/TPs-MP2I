//TP6 C - Pointeurs 
//VERET Salif MP2I



#include <stdio.h>


//Exercice 2

void conv_sec1(int nb_secondes, int *p1, int *p2, int *p3, int *p4);
void conv_sec2(int *ptr, int nb_secondes);

void conv_sec1(int nb_secondes, int *p1, int *p2, int *p3, int *p4){
    int secondes, minutes, heures, jours;
    secondes = (nb_secondes) % 60;
    minutes = ((nb_secondes - secondes) / 60) % 60;
    heures = ((nb_secondes - 60*minutes - secondes) / 3600) % 24;
    jours = (nb_secondes - 3600*heures - 60*minutes - secondes) / 24;

    *p1 = secondes;
    *p2 = minutes;
    *p3 = heures;
    *p4 = jours;
}

void conv_sec2(int *ptr, int nb_secondes){
    int minutes, heures, jours, secondes = (nb_secondes) % 60;
    *ptr = secondes;
    ptr += 1;
    minutes = ((nb_secondes - secondes) / 60) % 60;
    *ptr = minutes;
    ptr += 1;
    heures = ((nb_secondes - 60*minutes - secondes) / 3600) % 24;
    *ptr = heures;
    ptr += 1;
    jours = (nb_secondes - 3600*heures - 60*minutes - secondes) / 24;
    *ptr = jours;
}


void main(){
    //Declaration des variables
    int nb_secondes;
    int secondes, minutes, heures, jours;
    int *p1 = &secondes, *p2 = &minutes, *p3 = &heures, *p4 = &jours;
    int tableau_conv[4], *ptr = &tableau_conv[0];
    printf("Nombre de secondes a convertir : ");
    scanf("%d", &nb_secondes);

    //Solution 1 - Pointeurs

    conv_sec1(nb_secondes, p1, p2, p3, p4);
    printf("\nPREMIERE SOLUTION : 4 POINTEURS\n");
    printf("--------------------------------\n");
    printf("nbre de jours : %d\n", jours);
    printf("nbre d heures : %d\n", heures);
    printf("nbre de minutes : %d\n", minutes);
    printf("nbre de secondes : %d\n\n", secondes);

    conv_sec2(ptr, nb_secondes);
    printf("\nDEUXIEME SOLUTION : TABLEAU\n");
    printf("--------------------------------\n");
    printf("nbre de jours : %d\n", tableau_conv[3]);
    printf("nbre d heures : %d\n", tableau_conv[2]);
    printf("nbre de minutes : %d\n", tableau_conv[1]);
    printf("nbre de secondes : %d\n", tableau_conv[0]);

}
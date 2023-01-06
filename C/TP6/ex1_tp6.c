//TP6 C - Pointeurs
//VERET Salif MP2I


#include <stdio.h>

//Exercice 1

void fonction1(int *p, int taille, int k);
void fonction2(int *ptr, int taille);


void fonction1(int *p, int taille, int k){
    for (int i = 0; i < taille; i++){
        *p = (*p) * 2;
        (p)++;
    }
}

void fonction2(int *ptr, int taille){
    for (int i = 0; i < taille; i++){
        *ptr = (*ptr) * (*ptr);
        (ptr)++;
    }
}

void main(){
    int tableau[3] = {2, 4, 6};
    int x = 2, n = 3;
    int* p = NULL;
    p = &tableau[0];

    printf("Tableau initial ; [");
    for (int i = 0; i < 3; i++){
        printf("%d\t", *(p+i));
    }
    printf("]\n");

    fonction1(p, n, x);
    printf("Apres fonction1 : [");
    for (int i = 0; i < 3; i++){
        printf("%d\t", *(p+i));
    }
    printf("]\n");
    fonction2(p, n);
    printf("Apres fonction2 : [");
    for (int i = 0; i < 3; i++){
        printf("%d\t", *(p+i));
    }
    printf("]\n");
    printf("\n\n");
}
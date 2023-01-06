/*
TP2 Informatique MP2I
VERET Salif
15/09/2022
*/

#include <stdio.h>

//Exercice 3

int main(){
    int entier1, entier2, entier3;
    printf("Entrez 3 entiers\n");
    scanf("%d%d%d", &entier1, &entier2, &entier3);

    if (entier1 <= entier2 && entier2 <= entier3){
        printf("%d <= %d <= %d\n", entier1, entier2, entier3);
    }
    else if (entier1 <= entier3 && entier3 <= entier2){
        printf("%d <= %d <= %d\n", entier1, entier3, entier2);
    }
    else if (entier2 <= entier1 && entier1 <= entier3){
        printf("%d <= %d <= %d\n", entier2, entier1, entier3);
    }
    else if (entier2 <= entier3 && entier3 <= entier1){
        printf("%d <= %d <= %d\n", entier2, entier3, entier1);
    }
    else if (entier3 <= entier1 && entier1 <= entier2){
        printf("%d <= %d <= %d\n", entier3, entier1, entier2);
    }
    else {
        printf("%d <= %d <= %d\n", entier3, entier2, entier1);
    }


    return 0;
}
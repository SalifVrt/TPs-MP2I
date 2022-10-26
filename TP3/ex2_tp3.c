/*
VERET Salif
MP2I
TP3 Informatique (C) -- 23/09/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



// Exercice 2
int main()
{
	srand(time(NULL));
    int matrice_1 [2][3], matrice_2 [2][3], matrice1_lin[6];
    int matrice_add[2][3], matrice_mul[2][3];
    int random1, random2, n = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            random1 = (rand() % (100 - 0 + 1)) + 0;
            random2 = (rand() % (100 - 0 + 1)) + 0;
            matrice_1[i][j] = random1;
            matrice_2[i][j] = random2;
        }
    }
    printf("Matrice1 :\n");
    printf("----------\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\t[%d\t%d\t%d ]\n", matrice_1[i][0], matrice_1[i][1], matrice_1[i][2]);
    }
    printf("Matrice2 :\n");
    printf("----------\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\t[%d\t%d\t%d ]\n", matrice_2[i][0], matrice_2[i][1], matrice_2[i][2]);
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            matrice1_lin[n] = matrice_1[i][j];
            n += 1;
        }
    }
    printf("Matrice 1 linearisee :\n");
    printf("----------\n[ ");
    for (int i = 0; i < 5; i++){
        printf("%d\t", matrice1_lin[i]);
    }
    printf("%d]\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrice_add[i][j] = matrice_1[i][j] + matrice_2[i][j];
            matrice_mul[i][j] = matrice_1[i][j] * matrice_2[i][j];
        }
    }


    printf("Somme termes a termes :\n");
    printf("----------\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\t[%d\t%d\t%d ]\n", matrice_add[i][0], matrice_add[i][1], matrice_add[i][2]);
    }

    printf("Produit termes a termes :\n");
    printf("----------\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\t[%d\t%d\t%d ]\n", matrice_mul[i][0], matrice_mul[i][1], matrice_mul[i][2]);
    }

    return 0;
}


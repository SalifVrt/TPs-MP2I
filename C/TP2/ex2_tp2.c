/*
TP2 Informatique MP2I
VERET Salif
15/09/2022
*/

#include <stdio.h>

//Exercice 2

int ex2()
{
    int entier;
    float somme = 0.0;
    //la variable entier est de type float mais représente bien un entier.
    
    printf("Entrez un entier strictement superieur a 0\n");
    scanf("%d", &entier);
    
    if (entier == 0)
    {
        printf("l'entier doit etre non nul\n");
        main();
    }
    else
    {
        for (int i = 1; i < entier+1; i++)
        {
            somme = somme + 1.0 / (float)i;
        }
        printf("La somme des %d premiers entiers de la serie harmonique est %f", entier, somme);
    }
    return 0;
}

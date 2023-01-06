/*
VERET Salif
Informatique MP2I
TP4 C - Fonctions et modules
06/10/2022
*/


#include <stdio.h>


//Exercice 1

float conv_cel_vers_far(float temp)
{
    float conv = (9.0/5.0) * temp + 32.0;
    return conv;
}

float conv_far_vers_cel(float temp)
{
    float conv = (5.0/9.0) * (temp - 32.0);
    return conv;
}



int main()
{
    float temp, conv;
    int choix;
    printf("Quelle conversion souhaitez vous-faire ?\n");
    printf("\t1 - Conversion Celsius vers Farhrenheit\n");
    printf("\t2 - Conversion Fahrenheit vers Celsius\n");
    scanf("%d", &choix);

    
    if (choix == 1)
    {
        printf("Entrez une temperature\n");
        scanf("%f", &temp);
        conv = conv_cel_vers_far(temp);
        printf("Une temperature de %.2f degres C correspond a %.2f degres F", temp, conv);
    }
    else if (choix == 2)
    {
        printf("Entrez une temperature\n");
        scanf("%f", &temp);
        conv = conv_far_vers_cel(temp);
        printf("Une temperature de %.2f degres F correspond a %.2f degres C", temp, conv);
    }
    else
    {
        printf("Votre choix est incorrect");
    }
    return 0;
}
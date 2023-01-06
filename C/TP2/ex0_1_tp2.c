/*
TP2 Informatique MP2I
VERET Salif
15/09/2022
*/

#include <stdio.h>


//Exercice 0
int ex0()
{
    for (int i=1; i<21; i++)
    {
        int mult = 9*i;
        printf("9 * %d = %d\n", i, mult);
        return 0;
    }
}

//Exercice 1
int ex1()
{
    int ope, nb1, nb2, resul;
    int nouv_op;
    printf("Quelle operation souhaitez-vous realiser ?\n");
    printf("        - 1 pour l'addition\n");
    printf("        - 2 pour la soustraction\n");
    printf("        - 3 pour la multiplication\n");
    printf("        - 4 pour la division\n");
    scanf("%d", &ope);
    printf("Quel est le premier operande ?\n");
    scanf("%d", &nb1);
    printf("Quel est le second operande ?\n");
    scanf("%d", &nb2);
    
    switch(ope)
    {
        case 1 :
        {
            resul = nb1 + nb2;
            printf("Le resultat est : %d + %d = %d\n", nb1, nb2, resul);
            break;
        }
        case 2 :
        {
            resul = nb1 - nb2;
            printf("Le resultat est : %d - %d = %d\n", nb1, nb2, resul);
            break;
        }
        case 3 :
        {
            resul = nb1 * nb2;
            printf("Le resultat est : %d * %d = %d\n", nb1, nb2, resul);
            break;
        }
        case 4 :
        {   
            if (nb2 == 0)
            {
                printf("Division par 0 impossible");
                break;
            }
            else
            {
            resul = nb1 / nb2;
            printf("Le resultat est : %d / %d = %d\n", nb1, nb2, resul);
            break;
            }
        }
    }
    
    printf("Souhaitez-vous realiser une nouvelle operation ? <1 pour oui>");
    scanf("%d", &nouv_op);
    
    if (nouv_op == 1)
    {
        ex1();
    }
    
    return 0;
}



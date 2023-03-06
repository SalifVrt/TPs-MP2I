/*
    TP3 OCaml / C - Recursivite
    VERET Salif MP2I - Lycee Clemenceau Nantes
    19/02/2023
*/
#include <stdbool.h>
#include <stdio.h>


//Prototypes des fonctions
int somme_chiffres(int n);
int logb2(int n);
int bin(int n, int k);
bool est_parfait(int n);
int aux(int n, int m, int acc);

//EXERCICE 1
int somme_chiffres (int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return (n % 10) + somme_chiffres (n / 10);
    }
}

//EXERCICE 2
int logb2 (int n)
{
    if (n/2 < 2)
    {
        return 1;
    }
    else
    {
        return 1 + logb2(n/2);
    }
}

//EXERCICE 3
int bin (int n, int k)
{
    if (n < k)
    {
        return 0;
    }
    else if (n == k || k == 0)
    {
        return 1;
    }
    else
    {
        return ((n / k) * bin(n - 1, k - 1));
    }
}

//EXERCICE 4
int aux(int n, int m, int acc)
{
    if (m == n)
    {
        return acc;
    }
    else if (n%m == 0)
    {
        return aux(n, m+1, acc+m);
    }
    else
    {
        return aux(n, m+1, acc);
    }
}

bool est_parfait(int n)
{
    return n == aux(n, 1, 0);
}



void main()
{
    printf("%d\n", somme_chiffres(2023));
    printf("%d\n", logb2(15));
    printf("%d\n", est_parfait(8128));
    printf("%d\n", bin(6, 2));
}
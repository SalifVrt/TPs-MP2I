/*
VERET Salif
Informatique MP2I
TP4 C - Fonctions et modules
06/10/2022
*/

//Exercice 2


#include <stdio.h>
#include "surface.h"

const double pi;


double rectangle(double largeur, double longueur){
    double surface = largeur * longueur;
    return surface;
}

double disque(double rayon){
    double surface = pi * (rayon * rayon);
    return surface;
}

double enveloppeCylindre(double rayon, double hauteur){
    double surface = 2 * pi * rayon * hauteur;
    return surface;
}

double surfaceSphere(double rayon){
    double surface = 4 * pi * (rayon * rayon);
    return surface;
}
/*
VERET Salif
Informatique MP2I
TP4 C - Fonctions et modules
06/10/2022
*/

//Exercice 2


#include <stdio.h>
#include "volume.h"
#include "surface.h"

const double pi = 3.14159;


double volumePrisme(double largeur, double hauteur, double longueur){
    double volume = rectangle(largeur, longueur) * hauteur;
    return volume;
}

double volumeCylindre(double rayon, double hauteur){
    double volume = disque(rayon) * hauteur;
    return volume;
}

double volumeCone(double rayon, double hauteur){
    double volume = enveloppeCylindre(rayon, hauteur) / 3.0;
    return volume;
}

double volumeSphere(double rayon){
    double volume = (4.0/3.0) * surfaceSphere(rayon) * (pi * pi * pi);
    return volume;
}
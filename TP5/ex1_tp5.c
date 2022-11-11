/*
VERET Salif
Informatique MP2I
TP5 C - Structures de données
13/10/2022
Exercice 1
*/


#include <stdio.h>
#include <string.h>

//Creation du type grimpeur associe a la structure athlete
typedef struct athlete
    {
        char nom[20];
        char prenom[20];
        char nationalite[5];
        int vitesse;
        int bloc;
        int difficulte;
        int total;
    } grimpeur;
    
//Declaration des prototypes des fonctions

grimpeur init_grimpeur(char nom[20], char prenom[20], char nationalite[5],
int vitesse, int bloc, int difficulte);


//Fonctions et programme principal
    
grimpeur init_grimpeur(char nom[20], char prenom[20], char nationalite[5],
int vitesse, int bloc, int difficulte)
    {
        int total = vitesse * bloc * difficulte;
        grimpeur grimpa = { .vitesse = vitesse, .bloc = bloc, .difficulte = difficulte, .total = total};
        strcpy(grimpa.nom, nom);
        strcpy(grimpa.prenom, prenom);
        strcpy(grimpa.nationalite, nationalite);
        return grimpa;
    }

int main()
{
    grimpeur escalade[5];
    int n = 5; //longueur du tableau escalade
    escalade[0] = init_grimpeur("Narasaki", "Tomoa    ", "jpn", 3, 2, 6);
    escalade[1] = init_grimpeur("Mawem   ", "Mickael ", "fra", 2, 3, 7);
    escalade[2] = init_grimpeur("Colemane", "Nathaniel", "usa", 1, 6, 5);
    escalade[3] = init_grimpeur("Schubert", "Jakob    ", "aut", 5, 7, 1);
    escalade[4] = init_grimpeur("Lopez   ", "Alberto  ", "esp", 7, 1, 4);
	
	//Premier affichage du tableau
    grimpeur esc_iter;
    printf("SCORES ESCALADE\n");
    printf("----------\n\n");
    printf("Nom       \tPrenom    \tNat\tBloc\tVit\tDif\tTotal\n");
        
    for(int i = 0; i < n; i++)
        {
            esc_iter = escalade[i];
            printf("%s\t%s\t%s\t%d\t%d\t%d\t%d\n", escalade[i].nom, escalade[i].prenom,
            escalade[i].nationalite, escalade[i].bloc, escalade[i].vitesse,
           escalade[i].difficulte, escalade[i].total);
        }
        
    //Tri par insertion en fonction du total
    for (int i = 0; i < n; i++){
        grimpeur aux = escalade[i];
        int j = i;
        while ((j > 0) && (escalade[j-1].total > aux.total)){
            escalade[j] = escalade[j-1];
            j = j - 1;
        escalade[j] = aux;
        }
    }
    
	//Affichage du tableau trié
    printf("SCORES ESCALADE\n");
    printf("----------\n\n");
    printf("Nom       \tPrenom    \tNat\tBloc\tVit\tDif\tTotal\n");
        
    for(int i = 0; i < n; i++)
        {
            esc_iter = escalade[i];
            printf("%s\t%s\t%s\t%d\t%d\t%d\t%d\n", escalade[i].nom, escalade[i].prenom,
            escalade[i].nationalite, escalade[i].bloc, escalade[i].vitesse,
            escalade[i].difficulte, escalade[i].total);
        }    
        
        
    return 0;
}

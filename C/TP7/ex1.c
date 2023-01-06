/*VERET Salif MP2I
Creation du fichier : 08/12/2022
TP7 C - Structures de donnees (liste chainee)
*/

#include <stdlib.h>
#include <assert.h>

//Definition des types
typedef struct structure_noeud
{
    int info;
    struct structure_noeud *suivant;
} noeud;

typedef struct liste
{
    noeud *entree;
}listeChainee;

//Prototypes des fonctions
noeud* creeElement(int valeur);
listeChainee* creeInterface();
void afficheListe(listeChainee lst);
noeud* accedeNoeud(listeChainee lst, int position);
int insereNoeud(listeChainee* lst, int valeur, int position);
int supprimeElement(listeChainee *lst, int position);

int longueur_liste(listeChainee lst);
int recherche_valeur(listeChainee lst, int valeur);
void concatene_liste(listeChainee *lst1, listeChainee lst2);
void echange_dans_liste(listeChainee *lst);
int est_prefixe(listeChainee lst1, listeChainee lst2);
int copie_liste(listeChainee lst1, listeChainee *copie);


noeud* creeElement(int valeur)
{
    noeud *element = (noeud*)malloc(sizeof(noeud));
    if (element != NULL)
    { 
        element->info = valeur;
        element->suivant = NULL;
    } 
    return element;
}

listeChainee* creeInterface()
{
    listeChainee *lst = (listeChainee*)malloc(sizeof(listeChainee));
    lst->entree = NULL;
    return lst;
}

void afficheListe(listeChainee lst)
{
    if (lst.entree != NULL)
    {
        printf("{");
        noeud *ptr = lst.entree;
        while (ptr != NULL)
        {
            printf("%d, ", ptr->info);
            ptr = ptr->suivant;
        }
        printf("}");
    }
}

int longueur_liste(listeChainee lst)
{
    int compteur = 0;
    noeud *ptr = lst.entree;
    while (ptr != NULL)
    {
        compteur++;
        ptr = ptr->suivant;
    }
    return compteur;
}

noeud* accedeNoeud(listeChainee lst, int position)
{
    noeud *ptr = lst.entree;
    int lg = longueur_liste(lst);
    if (position > lg)
    {
        return NULL;
    }
    else
    {
        for (int i = 0; i < position; i++)
        {
            ptr = ptr->suivant;
        }
    }
    return ptr->suivant;
}

int insereNoeud(listeChainee* lst, int valeur, int position)
{
    noeud *a_inserer = (noeud*)malloc(sizeof(noeud*));
    a_inserer->info = valeur;
    assert(a_inserer != NULL);


    //Cas 1 : la position demandee est la 1ere de la liste
    if (position == 0)
    {
        noeud *nouvelle_entree = lst->entree;
        lst->entree = a_inserer;
        a_inserer->suivant = nouvelle_entree;
        return 0;
    }
    //Cas 2 : autre position demandee
    else
    {   
        //position > longueur de la liste : impossible
        if (position >= longueur_liste(*lst))
        {
            return -1;
        }

        else
        {
            noeud *cp_prec = accedeNoeud(*lst, position);
            noeud *ptr;
            //Suivant de l'element a inserer = pointeur sur l'element 
            //precedemment a cette position
            a_inserer->suivant = cp_prec;

            //Parcours de la liste pour modifier le pointeur de l'element precedent
            ptr = lst->entree;
            for (int i = 0; i < position; i++)
            {
                ptr = ptr->suivant;
            }
            ptr->suivant = a_inserer;

            return 0;
        }
    }
}

int supprimeElement(listeChainee *lst, int position)
{
    if (lst->entree == NULL)
    {
        return -1;
    }

    else if (position == 0)
    {
        
    }
}

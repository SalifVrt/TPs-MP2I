/* TP3 - exercice 3
SP- 08/21 - Manipulation de tableau
*/

/*----------------------------------------------------------*/
/* IMPORTATION BIBLIOTHEQUES                                */
/*----------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*----------------------------------------------------------*/
/* PROGRAMME PRINCIPAL                                      */
/*----------------------------------------------------------*/

int main()
{
	/* D�claration des variables */
	int tableau[5];
	int aux;
	int mini = 0, maxi = 100;

	/* G�n�ration et affichage du tableau */
	srand(time(NULL));
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		tableau[i] = (rand() % (maxi - mini + 1)) + mini;
	}

	printf("Tableau initial\n");
	printf("---------------\n");
	for (int i = 0; i < 5; i++)
	{
		tableau[i] = (rand() % (maxi - mini + 1)) + mini;
		printf("\t%d", tableau[i]);
	}
	printf("\n\n");

	/* Traitement du tableau */
	printf("Tableau en cours de traitement\n");
	printf("------------------------------\n\n");
	for (int i = 0; i < 5; i++)
	{
		int j = i;
		aux = tableau[i];
		while ((j > 0) && (tableau[j-1] > aux))
		{
			tableau[j] = tableau[j - 1];
			j--;
		}
		tableau[j] = aux;
		printf("Iteration %d\n", i+1);
		for (int k = 0; k < 5 ; k++)
		{
			printf("\t%d", tableau[k]);
		}
		printf("\n\n");
	}
	printf("\n\n");
	return 0;
}
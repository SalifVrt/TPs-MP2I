/* TP3 - exercice 0
SP – 08/21 - Prévisions sur valeurs dans des tableaux
*/


/*--------------------------------------*/
/* IMPORTATION BIBLIOTHEQUES            */
/*--------------------------------------*/

# include <stdio.h>

/*--------------------------------------*/
/* PROGRAMME PRINCIPAL                  */
/*--------------------------------------*/

int main()
{
	// Déclaration des variables
	int tableau1[2];
	int tableau2[2] = { 9 };
	int tableau3[2] = {3,1};
	int tableau4[2][2];
	int tableau5[2][2] = {3};
	int tableau6[2][2] = { { 2, 2 }, { 5, 5 } };
	int tableau7[2][2] = { { 3 }, { 7 } };

	// Affichage des tableaux

	// tableau1
	printf("Tableau1 avant affectations : \n");
	printf("\t%d\t%d\n", tableau1[1], tableau1[1]);
	printf("\n");

	// Remplissage tableau1 et tableau4
	for (int i = 0; i < 2;i++)
	{
		tableau1[i] = i + 1;
		for (int j = 0; j < 2;j++)
		{
			tableau4[i][j] = i + j;
		}
	}
	
	// tableau1
	printf("Tableau1 apres affectations: \n");
	printf("\t%d\t%d\n", tableau1[0], tableau1[1]);
	printf("\n");

	// tableau2
	printf("Tableau2 : \n");
	printf("\t%d\t%d\n", tableau2[0], tableau2[1]);
	printf("\n");

	// tableau3
	printf("Tableau3 : \n");
	printf("\t%d\t%d\n", tableau3[0], tableau3[1]);
	printf("\n");

	// tableau4
	printf("Tableau4 : \n");
	printf("\t%d\t%d\n", tableau4[0][0], tableau4[0][1]);
	printf("\t%d\t%d\n", tableau4[1][0], tableau4[1][1]);
	printf("\n");

	// tableau5
	printf("Tableau5 : \n");
	printf("\t%d\t%d\n", tableau5[0][0], tableau5[0][1]);
	printf("\t%d\t%d\n", tableau5[1][0], tableau5[1][1]);
	printf("\n");

	// tableau6
	printf("Tableau6 : \n");
	printf("\t%d\t%d\n", tableau6[0][0], tableau6[0][1]);
	printf("\t%d\t%d\n", tableau6[1][0], tableau6[1][1]);
	printf("\n");

	// tableau7
	printf("Tableau7 : \n");
	printf("\t%d\t%d\n", tableau7[0][0], tableau7[0][1]);
	printf("\t%d\t%d\n", tableau7[1][0], tableau7[1][1]);
	printf("\n");
	
	printf("\n\n");
	return 0;
}
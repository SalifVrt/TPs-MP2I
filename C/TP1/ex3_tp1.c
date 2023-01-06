/* TP1 - exercice 3
SP- 09/22 - Depssaement
*/

/*----------------------------------------------------------*/
/* IMPORTATION BIBLIOTHEQUES                                */
/*----------------------------------------------------------*/

# include <stdio.h>
# include <stdint.h>

/*----------------------------------------------------------*/
/* PROGRAMME PRINCIPAL                                      */
/*----------------------------------------------------------*/

int main()
{
	/*--------------------------------------*/
	/* Déclaration des variables*/

	uint8_t int1 = 255;
	uint8_t int2 = 259;
	uint8_t int3;
	uint8_t int4;
	uint8_t int5 = 2;

	/*--------------------------------------*/
	/* Instructions */

	printf("Premier entier %d stocke sur %d octet\n", int1, sizeof (int1));
	printf("Deuxieme entier %d stocke sur %d octet\n", int2, sizeof(int2));
	printf("Cinquieme entier %d stocke sur %d octet\n", int5, sizeof(int5));
	int4 = int1 + int2;
	printf("Somme de deux entiers :int1 + int2 = %d stocke sur %d octet\n", int4, sizeof(int4));

	printf("\n\n");
	return 0;
}

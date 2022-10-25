/* TP1 - exercice 4
SP- 09/22 - Conversion de types d'entiers
*/

/*----------------------------------------------------------*/
/* IMPORTATION BIBLIOTHEQUES                                */
/*----------------------------------------------------------*/

# include <stdio.h>

/*----------------------------------------------------------*/
/* PROGRAMME PRINCIPAL                                      */
/*----------------------------------------------------------*/

int main()
{
	/*--------------------------------------*/
	/* Declaration des variables*/
	unsigned short int1 = 10, int2 = 32767;
	unsigned int int3 = 100, int4 = 69755;
	float float1 = 15., float2 = 6;
	unsigned short resultatShort;
	unsigned int resultatInt;
	float resultatFloat;

	/*--------------------------------------*/
	/* Instructions*/
	//Affichage preliminaire
	printf("Etat initial des variables\n");
	printf("--------------------------\n");
	printf("Short int1 : %d de taille %d octets\n", int1, sizeof(int1));
	printf("Short int2 : %d de taille %d octets\n", int2, sizeof(int2));
	printf("Int int3 : %d de taille %d octets\n", int3, sizeof(int3));
	printf("Int int4 : %d de taille %d octets\n", int4, sizeof(int4));
	printf("Float float1 : %f de taille %d octets\n", float1, sizeof(float1));
	printf("Float float2 : %f de taille %d octets\n", float2, sizeof(float2));

	printf("\n\n");

	// Operations diverses et affichages
	printf("Resultats d'operations et de conversions\n");
	printf("----------------------------------------\n");
	
	resultatShort = int1 / int2;
	printf("Short <- int1 / int2, soit %d / %d = %d\n", int1, int2, resultatShort);
	
	resultatFloat = int1 / int2;
	printf("Float <- int1 / int2, soit %d / %d = %f \n", int1, int2, resultatFloat);
	
	resultatFloat = int1 / float(int2);
	printf("Float <- int1 / float(int2), soit %d / %d = %f\n", int1, int2, resultatFloat);
	
	printf("\n");
	resultatShort = int3 / float1;;
	printf("Short <- int3 / float1, soit %d / %f = %d\n", int3, float1, resultatShort);
	
	resultatFloat = int3 / float1;
	printf("Float <- int3 / float1, soit %d / %f = %f\n", int3, float1, resultatFloat);

	printf("\n");
	resultatShort = (short)int4;
	printf("Conversion de int4 = %d en short : %d\n", int4, resultatShort);
	
	printf("\n");
	resultatInt = int4 % int3;
	printf("Int <- int4 modulo int3, soit %d (mod) %d = %d de taille %d octets\n", int4, int3, resultatInt);
	
	printf("\n\n");
	return 0;
}

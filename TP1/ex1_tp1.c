/*
TP1 Informatique MP2I
VERET Salif
09/09/2022
*/

#include <stdio.h>
#include <stdint.h>


//Exercice 1

int infos_age()
{
    int age;
    printf("Bonjour, quel age avez-vous ?");
    scanf("%d", &age);
    printf("Vous avez %d\n", age);
    printf("En octal, cela fait : %o\n", age);
    printf("En hexadecimal, cela fait %x\n", age);
    printf("\nVous en paraissez %d...\n", age);
    printf("\nAppuyez sur une touche pour continuer...");
    
    return 0;
    
}


//Exercice 2


int main()
{
    int8_t ent8 = -8;
    uint8_t entm8 = 8;
    int32_t ent32 = -32;
    uint32_t entm32 = 32;
    int64_t ent64 = -64;
    uint64_t entm64 = 64;
    
    printf("Pour les int8_t :\n");  
    printf("    uint8_t : valeur de %d  stocke sur %d octet\n", entm8, sizeof(entm8));
//    printf("        valeur minimale :%d, valeur maximale :%d, nombre de valeurs :%d", 0, 255, 256);
    printf("    int_8t : valeur de %d\n  stocke sur %d octet\n", ent8, sizeof(ent8));
//    printf("        valeur minimale :%d, valeur maximale :%d, nombre de valeurs :%d", -127, 127, 256);
    printf("Pour les int32_t :\n");
    printf("    uint32_t : valeur de %d\n  stocke sur %d octets\n", entm32, sizeof(entm32));
//    printf("        valeur minimale :%d, valeur maximale :%d, nombre de valeurs :%d", );
    printf("    int32_t : valeur de %d\n  stocke sur %d octets\n", ent32, sizeof(ent32));
//    printf("        valeur minimale :%d, valeur maximale :%d, nombre de valeurs :%d", );
    printf("Pour les int_64t :\n");
    printf("    uint64_t : valeur de %d\n  stocke sur %d octets\n", entm64, sizeof(entm64));
//    printf("        valeur minimale :%d, valeur maximale :%d, nombre de valeurs :%d", );
    printf("    int_64t : valeur de %d\n  stocke sur %d octets\n", ent64, sizeof(ent64));
//    printf("        valeur minimale :%d, valeur maximale :%d, nombre de valeurs :%d", );
    
    return 0;
    
}
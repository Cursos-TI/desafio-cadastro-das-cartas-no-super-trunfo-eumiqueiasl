#include <stdio.h>

int main(){
    //Cidade A1
    int populacaoA1;
    float areaA1;
    float pibA1;
    int NpontosturisticosA1;

    //Cidade A2
    int populacaoA2;
    float areaA2;
    float pibA2;
    int NpontosturisticosA2;
    
    printf("Cidade A1\n");
    printf("População A1:\n");
    scanf("%d", &populacaoA1);
    printf("Área A1(km²):\n");
    scanf("%f", &areaA1);
    printf("PIB A1:\n");
    scanf("%f", &pibA1);
    printf("Numero de pontos turisticos A1:\n");
    scanf("%d", &NpontosturisticosA1);

    printf("Cidade A2\n");
    printf("População A2:\n");
    scanf("%d", &populacaoA2);
    printf("Área A2(km²):\n");
    scanf("%f", &areaA2);
    printf("PIB A2:\n");
    scanf("%f", &pibA2);
    printf("Numero de pontos turisticos A2:\n");
    scanf("%d", &NpontosturisticosA2);

    printf("Cidade A1\n");
    printf("Populacao A1: %d\n", populacaoA1);
    printf("Area A1(km²): %.2f\n", areaA1);
    printf("PIB A1: %.2f\n", pibA1);
    printf("Numero de pontos turisticos A1: %d\n", NpontosturisticosA1);

    printf("Cidade A2\n");
    printf("Populacao A2: %d\n", populacaoA2);
    printf("Area A2(km²): %.2f\n", areaA2);
    printf("PIB A2: %f\n", pibA2);
    printf("Numero de pontos turisticos A2: %d\n", NpontosturisticosA2);

    return 0;
}


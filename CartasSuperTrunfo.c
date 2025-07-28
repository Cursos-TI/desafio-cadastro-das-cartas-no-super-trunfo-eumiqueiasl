#include <stdio.h>

int main(){
    //Cidade A1
    char estadoA1;
    char nomedacidadeA1;
    int populacaoA1;
    float areaA1;
    float pibA1;
    int NpontosturisticosA1;
    float densidadepopA1;
    float pibpercaptaA1; 

    //Cidade A2
    char estadoA2[3]; // Ex SP
    char nomedacidadeA2[50];
    int populacaoA2;
    float areaA2;
    float pibA2;
    int NpontosturisticosA2;
    float densidadepopA2;
    float pibpercaptaA2;

    printf("Cidade A1\n");
    printf("Estado A1 (ex: SP):\n");
    scanf("%s", &estadoA1);
    printf("Nome da cidade A1:\n");
    scanf("%s", &nomedacidadeA1);
    printf("População A1:\n");
    scanf("%d", &populacaoA1);
    printf("Área A1(km²):\n");
    scanf("%f", &areaA1);
    printf("PIB A1:\n");
    scanf("%f", &pibA1);
    printf("Numero de pontos turisticos A1:\n");
    scanf("%d", &NpontosturisticosA1);

    printf("Cidade A2\n");
     printf("Estado A2 (ex: SP):\n");
    scanf("%s", &estadoA2);
    printf("Nome da cidade A2:\n");
    scanf("%s", &nomedacidadeA2);
    printf("População A2:\n");
    scanf("%d", &populacaoA2);
    printf("Área A2(km²):\n");
    scanf("%f", &areaA2);
    printf("PIB A2:\n");
    scanf("%f", &pibA2);
    printf("Numero de pontos turisticos A2:\n");
    scanf("%d", &NpontosturisticosA2);

    // Cálculos
    densidadepopA1 = (float)populacaoA1 / areaA1;
    pibpercaptaA1 = pibA1 / populacaoA1;

    densidadepopA2 = (float)populacaoA2 / areaA2;
    pibpercaptaA2 = pibA2 / populacaoA2;

    printf("Cidade A1\n");
    printf("Estado A1: %s\n", estadoA1);
    printf("Nome da cidade A1: %s\n", nomedacidadeA1);
    printf("Populacao A1: %d\n", populacaoA1);
    printf("Area A1(km²): %.2f\n", areaA1);
    printf("PIB A1: %.2f\n", pibA1);
    printf("Numero de pontos turisticos A1: %d\n", NpontosturisticosA1);
    printf("Densidade populacional A1 (hab/km²):%.2f\n", densidadepopA1);
    printf("PIB per Capita A1:%.2f\n", pibpercaptaA1);

    printf("Cidade A2\n");
    printf("Estado A2: %s\n", estadoA2);
    printf("Nome da cidade A2: %s\n", nomedacidadeA2);
    printf("Populacao A2: %d\n", populacaoA2);
    printf("Area A2(km²): %.2f\n", areaA2);
    printf("PIB A2: %.2f\n", pibA2);
    printf("Numero de pontos turisticos A2: %d\n", NpontosturisticosA2);
    printf("Densidade populacional A2 (hab/km²):%.2f\n", densidadepopA2);
    printf("PIB per Capita A2:%.2f\n", pibpercaptaA2);

    return 0;
}


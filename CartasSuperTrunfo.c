#include <stdio.h>

int main(){
    //Carta 1
    char estado1[30];
    char codigodacarta1[10];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int Npontosturisticos1;
    float densidadepop1;
    float pibpercapta1; 

    //Carta 2
    char estado2[3];
    char codigodacarta2[10];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int Npontosturisticos2;
    float densidadepop2;
    float pibpercapta2;

    printf("Insira os dados da primeira carta \n");
    printf("Digite a letra do Estado (Entre A e H):\n");
    scanf("%s", estado1);
    printf("Codigo da carta (dois digitos): \n");
    scanf("%s", codigodacarta1);
    printf("Nome da cidade:\n");
    scanf("%s", nomedacidade1);
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Área(km²):\n");
    scanf("%f", &area1);
    printf("PIB:\n");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos:\n");
    scanf("%d", &Npontosturisticos1);

    densidadepop1 = (float)populacao1 / area1;
    pibpercapta1 = pib1 / populacao1;

    printf("Insira os dados da segunda carta\n");
    printf("Digite a letra do Estado (Entre A e H):\n");
    scanf("%s", estado2);
    printf("Codigo da carta (dois digitos): \n");
    scanf("%s", codigodacarta2);
    printf("Nome da cidade:\n");
    scanf("%s", nomedacidade2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Área(km²):\n");
    scanf("%f", &area2);
    printf("PIB:\n");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos:\n");
    scanf("%d", &Npontosturisticos2);

    densidadepop2 = (float)populacao2 / area2;
    pibpercapta2 = pib2 / populacao2;

    //Exibição dos dados da primeira carta
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s \n", estado1, codigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidadeA1);
    printf("Populacao A1: %d\n", populacaoA1);
    printf("Area A1(km²): %.2f\n", areaA1);
    printf("PIB A1: %.2f\n", pibA1);
    printf("Numero de pontos turisticos A1: %d\n", NpontosturisticosA1);
    printf("Densidade populacional A1 (hab/km²):%.2f\n", densidadepopA1);
    printf("PIB per Capita A1:%.2f\n", pibpercaptaA1);

    printf("Cidade A2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s \n", estado2, codigodacarta1);
    printf("Nome da cidade A2: %s\n", nomedacidadeA2);
    printf("Populacao A2: %d\n", populacaoA2);
    printf("Area A2(km²): %.2f\n", areaA2);
    printf("PIB A2: %.2f\n", pibA2);
    printf("Numero de pontos turisticos A2: %d\n", NpontosturisticosA2);
    printf("Densidade populacional A2 (hab/km²):%.2f\n", densidadepopA2);
    printf("PIB per Capita A2:%.2f\n", pibpercaptaA2);

    return 0;
}


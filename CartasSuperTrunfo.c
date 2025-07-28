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
    pibpercapta1 = (pib1 * 1000000000.0f) / populacao1;

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
    pibpercapta2 = (pib2 * 1000000000.0f) / populacao2;

    //Exibição dos dados da primeira carta
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s \n", estado1, codigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area(km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", Npontosturisticos1);
    printf("Densidade populacional(hab/km²):%.2f\n", densidadepop1);
    printf("PIB per Capita:%.2f\n", pibpercapta1);

    //Exibição dos dados da segunda carta
    printf("Carta2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s \n", estado2, codigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area(km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", Npontosturisticos2);
    printf("Densidade populacional(hab/km²):%.2f\n", densidadepop2);
    printf("PIB per Capita:%.2f\n", pibpercapta2);

    return 0;
}


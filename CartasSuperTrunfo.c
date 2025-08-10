#include <stdio.h>

int main(){
    //Jogo Cartas Super Trunfo

    //Carta 1
    char estado1[3];
    char codigodacarta1[10];
    char nomedacidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int Npontosturisticos1;
    float densidadepop1;
    float pibpercapta1; 
    float superPoder1;

    //Carta 2
    char estado2[3];
    char codigodacarta2[10];
    char nomedacidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int Npontosturisticos2;
    float densidadepop2;
    float pibpercapta2;
    float superPoder2;

    //Imprimir primeira carta
    printf("Insira os dados da primeira carta \n");
    printf("Digite a letra do Estado (Entre A e H):\n");
    scanf("%c", estado1);
    printf("Codigo da carta (dois digitos): \n");
    scanf("%s", codigodacarta1);
    printf("Nome da cidade:\n");
    scanf("%s", nomedacidade1);
    printf("População:\n");
    scanf("%lu", &populacao1);
    printf("Área(km²):\n");
    scanf("%f", &area1);
    printf("PIB:\n");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos:\n");
    scanf("%d", &Npontosturisticos1);

    densidadepop1 = (float)populacao1 / area1;
    pibpercapta1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = (float)populacao1 +
                   area1 +
                   (pib1 * 1000000000) +  // Convertendo PIB para reais
                   (float)Npontosturisticos1 +
                   pibpercapta1 +
                   (1 / densidadepop1);
  
    //Imprimir segunda carta
    printf("Insira os dados da segunda carta\n");
    printf("Digite a letra do Estado (Entre A e H):\n");
    scanf("%c", estado2);
    printf("Codigo da carta (dois digitos): \n");
    scanf("%s", codigodacarta2);
    printf("Nome da cidade:\n");
    scanf("%s", nomedacidade2);
    printf("População:\n");
    scanf("%lu", &populacao2);
    printf("Área(km²):\n");
    scanf("%f", &area2);
    printf("PIB:\n");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos:\n");
    scanf("%d", &Npontosturisticos2);

    densidadepop2 = (float)populacao2 / area2;
    pibpercapta2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 +
                   area2 +
                   (pib2 * 1000000000) +  // Convertendo PIB para reais
                   (float)Npontosturisticos2 +
                    pibpercapta2 +
                   (1 / densidadepop2);

    //Exibição dos dados da primeira carta
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s \n", estado1, codigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area(km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", Npontosturisticos1);
    printf("Densidade populacional(hab/km²):%.2f\n", densidadepop1);
    printf("PIB per Capita:%.2f\n", pibpercapta1);
    printf("Super Poder: %.2f\n", superPoder1);


    //Exibição dos dados da segunda carta
    printf("Carta2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s \n", estado2, codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area(km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", Npontosturisticos2);
    printf("Densidade populacional(hab/km²):%.2f\n", densidadepop2);
    printf("PIB per Capita:%.2f\n", pibpercapta2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações

    int rPopulacao = populacao1 > populacao2;
    int rArea = area1 > area2;
    int rPib = pib1 > pib2;
    int rPontosTuristicos = Npontosturisticos1 > Npontosturisticos2;
    int rDensidade = densidadepop1 < densidadepop2; // menor vence
    int rPibPerCapita = pibpercapta1 > pibpercapta2;
    int rSuperPoder = superPoder1 > superPoder2;

    // Exibir os resultados
    printf("\n=== Resultados das Comparações ===\n");
    printf("População: %d - Carta %d venceu\n", rPopulacao, rPopulacao ? 1 : 2);
    printf("Área: %d - Carta %d venceu\n", rArea, rArea ? 1 : 2);
    printf("PIB: %d - Carta %d venceu\n", rPib, rPib ? 1 : 2);
    printf("Pontos Turísticos: %d - Carta %d venceu\n", rPontosTuristicos, rPontosTuristicos ? 1 : 2);
    printf("Densidade Populacional: %d - Carta %d venceu\n", rDensidade, rDensidade ? 1 : 2);
    printf("PIB per Capita: %d - Carta %d venceu\n", rPibPerCapita, rPibPerCapita ? 1 : 2);
    printf("Super Poder: %d - Carta %d venceu\n", rSuperPoder, rSuperPoder ? 1 : 2);


    // Implementação Logicas de decisão comparando atributos

printf("Comparação de cartas:\n");
printf("População 1: %lu\n", populacao1);
printf("População 2: %lu\n", populacao2);

if (populacao1 > populacao2){
    printf("Carta 1 venceu por ter a maior população \n");
} else{ 
    printf("Carta 2 venceu por ter a maior população \n");
    }
           
}

#include <stdio.h>

int main(){

    char estado, Estadodois;
    char codigo[25], codigodois[30];
    char nome[20], nomedois[30];
    unsigned long int populacao, populacaodois;
    float area, areadois;
    float pib, pibdois;
    int turisticos, turisticosdois;
    float densidade, densidadedois;
    float capita, capitadois;
    float superpoderum, superpoderdois;
    int resultado, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
    int escolhaJogador, escolhaComputador;

    printf("Estado cidade 1: \n");
    scanf("%c", &estado);
    printf("Codigo da cidade 1: \n");
    scanf("%s", &codigo);
    printf("Nome da cidade 1: \n");
    scanf("%s", &nome);
    printf("População da cidade 1: \n");
    scanf("%u", &populacao);
    printf("Área da cidade 1: \n");
    scanf("%f", &area);
    printf("PIB da cidade 1: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos da cidade 1: \n");
    scanf("%d", &turisticos);

    densidade = populacao / area;

    capita = pib / populacao;

    superpoderum = populacao + area + pib + turisticos + capita + (1 / densidade);

    printf("Estado da cidade 2: \n");
    scanf(" %c", &Estadodois);
    printf("Código da cidade 2: \n");
    scanf("%s", &codigodois);
    printf("Nome da cidade 2: \n");
    scanf("%s", &nomedois);
    printf("População da cidade 2: \n");
    scanf("%d", &populacaodois);
    printf("Área da cidade 2: \n");
    scanf("%f", &areadois);
    printf("PIB da cidade 2: \n");
    scanf("%f", &pibdois);
    printf("Número de pontos turísticos da cidade 2: \n");
    scanf("%d", &turisticosdois);

    densidadedois = populacaodois / areadois;

    capitadois = pibdois / populacaodois;

    superpoderdois = populacaodois + areadois + pibdois + turisticosdois + capitadois + (1 / densidadedois);

    printf("Cidade 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", turisticos);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", capita);
    printf("Super Poder: %.2f\n", superpoderum);

    printf("Cidade 2: \n");
    printf("Estado: %c\n", Estadodois);
    printf("Código: %s\n", codigodois);
    printf("Nome da Cidade: %s\n", nomedois);
    printf("População: %d\n", populacaodois);
    printf("Área: %.2f km²\n", areadois);
    printf("PIB: %.2f bilhões de reais\n", pibdois);
    printf("Número de pontos turísticos: %d\n", turisticosdois);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadedois);
    printf("PIB per Capita: %.2f reais\n", capitadois);
    printf("Super Poder: %.2f\n", superpoderdois);

    resultado = populacao > populacaodois;
    resultado2 = area > areadois;
    resultado3 = pib > pibdois;
    resultado4 = turisticos > turisticosdois;
    resultado5 = densidade > densidadedois;
    resultado6 = capita > capitadois;
    resultado7 = superpoderum < superpoderdois;

    printf("Comparação das cartas: (Carta 1 venceu é representado por 1, Carta 2 venceu é representado por 2)\n");
    printf("População: %d\n", resultado);
    printf("Área: %d\n", resultado2);
    printf("PIB: %d\n", resultado3);
    printf("Pontos Turísticos: %d\n", resultado4);
    printf("Densidade Populacional: %d\n", resultado5);
    printf("PIB per capita: %d\n", resultado6);
    printf("Super Poder: %d\n", resultado7);

    printf("### Escolha um atributo para Comparar! ###\n");
    printf("1 - Nome da Cidade\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de Pontos Turísticos\n");
    printf("6 - Densidade Demográfica\n");
    scanf("%d", &escolhaJogador);

#include <stdio.h>

int main(){

    char estado, Estadodois;
    char codigo[20], codigodois[20];
    char nome[20], nomedois[20];
    int populacao, populacaodois;
    float area, areadois;
    float pib, pibdois;
    int turisticos, turisticosdois;

    printf("Estado cidade 1: \n");
    scanf("%c", &estado);
    printf("Codigo da cidade 1: \n");
    scanf("%s", &codigo);
    printf("Nome da cidade 1: \n");
    scanf("%s", &nome);
    printf("População da cidade 1: \n");
    scanf("%d", &populacao);
    printf("Área da cidade 1: \n");
    scanf("%f", &area);
    printf("PIB da cidade 1: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos da cidade 1: \n");
    scanf("%d", &turisticos);
    
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

    printf("Cidade 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", turisticos);

    printf("Cidade 2: \n");
    printf("Estado: %c\n", Estadodois);
    printf("Código: %s\n", codigodois);
    printf("Nome da Cidade: %s\n", nomedois);
    printf("População: %d\n", populacaodois);
    printf("Área: %.2f km²\n", areadois);
    printf("PIB: %.2f bilhões de reais\n", pibdois);
    printf("Número de pontos turísticos: %d\n", turisticosdois);

    return 0;

}

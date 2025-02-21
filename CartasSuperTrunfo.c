#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trunfo Básico - Países\n");

    char estado1;
    char codigo1[10];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    char estado2;
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
    printf("Carta 1:\n");

    printf("Estado: \n");
    scanf("%c", estado1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Cidade: \n");
    scanf("%s", cidade1);

    printf("Área: \n");
    scanf("%f", area1);

    printf("Pontos Turísticos: \n");
    scanf("%d", pontos1);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

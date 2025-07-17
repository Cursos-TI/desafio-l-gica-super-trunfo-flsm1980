#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    char cartaA1[3], cartaB1[3], cidadeA1[30], cidadeB1[30];
    int populacaoA1, populacaoB1;
    float areaA1, areaB1, pibA1, pibB1;
    int pontosturisticosA1, pontosturisticosB1;
    
    // Cadastro das Cartas:

    // CartaA1

    printf("INSIRA DADOS DA PRIMEIRA CARTA\n\n");

    printf("Código da Carta (letra e número): \n");
    scanf("%s", cartaA1);

    printf("Nome da cidade: \n");
    scanf("%s", cidadeA1);

    printf("População: \n");
    scanf("%d", &populacaoA1);

    printf("Área: \n");
    scanf("%f", &areaA1);

    printf("PIB: \n");
    scanf("%f", &pibA1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticosA1);

    // CartaB1

    printf("\n");
    printf("INSIRA DADOS DA SEGUNDA CARTA\n\n");

    printf("Código da Carta (letra e número): \n");
    scanf("%s", cartaB1);

    printf("Nome da Cidade: \n");
    scanf("%s", cidadeB1);
    
    printf("População: \n");
    scanf("%d", &populacaoB1);
    
    printf("Área: \n");
    scanf("%f", &areaB1);
    
    printf("PIB: \n");
    scanf("%f", &pibB1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticosB1);

        // Cálculo de densidade demográfica cartaA1
        float densidadeA1 = (populacaoA1 / areaA1);
        // Cálculo de PIB per capita cartaA1
        float pibcapitaA1 = (pibA1 / populacaoA1);
        // Cálculo do inverso da densidade demográfica cartaA1
        float inversoDensidadeA1 = (areaA1 / populacaoA1);

        // Exibição dos dados calculados
        printf("\nDensidade Populacional cidade 1: %.2f hab/km²\n", densidadeA1);
        printf("PIB per Capita cidade 1: R$ %.2f\n\n", pibcapitaA1);

        // Cálculo de densidade demográfica cartaB1
        float densidadeB1 = (populacaoB1 / areaB1);
        // Cálculo de PIB per capita cartaB1
        float pibcapitaB1 = (pibB1 / populacaoB1);
        // Cálculo do inverso da densidade demográfica cartaB1
        float inversoDensidadeB1 = (areaB1 / populacaoB1);

        // Exibição dos dados calculados
        printf("Densidade Populacional cidade 2: %.2f hab/km²\n", densidadeB1);
        printf("PIB per Capita cidade 2: R$ %.2f\n\n", pibcapitaB1);

    // Comparação de Cartas:

    printf("PIB da cidade 1: %.2f\n", pibA1);
    printf("PIB da cidade 2: %.2f\n\n", pibB1);

    // Exibição dos Resultados
    // Código escrito prevendo a possibilidade de empate entre os valores digitados pelo usuário

    if (pibA1 == pibB1) {
        printf("As duas cidades têm o mesmo PIB.\n\n");
     } else if (pibA1 > pibB1) {
          printf("Cidade 1 tem maior PIB.\n\n");
        } else {
          printf("Cidade 2 tem maior PIB.\n\n");
        }

    if (pibA1 == pibB1) {
        printf("Deu empate!\n");
     } else if (pibA1 > pibB1) {
        printf("%s venceu!\n", cidadeA1);
        } else {
        printf("%s venceu!\n", cidadeB1);
     }


    printf("\n*** Fim *** \n\n\n");

    return 0;
}

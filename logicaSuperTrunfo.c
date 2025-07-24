#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    char cartaA1[5], cartaB1[5], cidadeA1[30], cidadeB1[30];
    int populacaoA1, populacaoB1;
    float areaA1, areaB1, pibA1, pibB1, densidadeA1, densidadeB1;
    int pontosturisticosA1, pontosturisticosB1;
    
    // Cadastro das Cartas:

    // CartaA1

    printf("INSIRA DADOS DA PRIMEIRA CARTA\n\n");

    printf("Código da Carta (letra e número): \n");
    scanf("%s", cartaA1);

    printf("Nome da cidade: \n");
    scanf(" %29[^\n]", cidadeA1);

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
    scanf(" %29[^\n]", cidadeB1);
    
    printf("População: \n");
    scanf("%d", &populacaoB1);
    
    printf("Área: \n");
    scanf("%f", &areaB1);
    
    printf("PIB: \n");
    scanf("%f", &pibB1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticosB1);

        // Cálculo do inverso das densidades demográficas das cartas 1 e 2

        if (areaA1 > 0) {
          densidadeA1 = (float)populacaoA1 / areaA1;} // Garante que a divisão seja float
        else {
          densidadeA1 = 0.0f;
          printf("Aviso: área da Carta A01 é zero, densidade populacional indefinida!\n\n");
        }
        
        if (areaB1 > 0) {
          densidadeB1 = (float)populacaoB1 / areaB1;} // Garante que a divisão seja float
        else {
          densidadeB1 = 0.0f;
          printf("Aviso: área da Carta B01 é zero, densidade populacional indefinida!\n\n");
        }

    // Menu para escolha do atributo a ser comparado
    printf("\n*** Escolha um atributo para comparação ***\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Sair do Jogo\n");

    // Variável para escolha do atributo
    int opcao;

    printf("\nQual item você quer comparar?\n");
    scanf("%d", &opcao);

    // Utilizando switch para comparar os atributos de acordo com a escolha do jogador
    switch (opcao) {
      case 1:
        printf ("\nAtributo escolhido: população\n\n");
            printf ("%s tem uma população de %d habitantes.\n", cidadeA1 , populacaoA1);
            printf ("%s tem uma população de %d habitantes.\n", cidadeB1 , populacaoB1);

        if (populacaoA1 > populacaoB1) {           
            printf ("%s ganhou! \n\n", cidadeA1);
          } else if (populacaoA1 < populacaoB1) {
            printf ("%s ganhou! \n\n", cidadeB1);
          } else { 
            printf ("Deu empate!\n\n");
          }
      break;

      case 2:
        printf ("\nAtributo escolhido: área\n\n");
            printf ("%s tem uma área de %.2f km².\n", cidadeA1 , areaA1);
            printf ("%s tem uma área de %.2f km².\n", cidadeB1 , areaB1);

        if (areaA1 > areaB1) {           
            printf ("%s ganhou! \n\n", cidadeA1);
          } else if (areaA1 < areaB1) {
            printf ("%s ganhou! \n\n", cidadeB1);
          } else { 
            printf ("Deu empate!\n\n");
          }
      break;

      case 3:
        printf ("\nAtributo escolhido: PIB\n\n");
            printf ("%s tem um PIB de %.2f R$.\n", cidadeA1 , pibA1);
            printf ("%s tem um PIB de %.2f R$.\n", cidadeB1 , pibB1);
            
        if (pibA1 > pibB1) {           
            printf ("%s ganhou! \n\n", cidadeA1);
          } else if (pibA1 < pibB1) {
            printf ("%s ganhou! \n\n", cidadeB1);
          } else { 
            printf ("Deu empate!\n\n");
          }
      break;

      case 4:
        printf ("\nAtributo escolhido: pontos turísticos\n\n");
            printf ("%s tem %d pontos turísticos.\n", cidadeA1 , pontosturisticosA1);
            printf ("%s tem %d pontos turísticos.\n", cidadeB1 , pontosturisticosB1);
            
        if (pontosturisticosA1 > pontosturisticosB1) {           
            printf ("%s ganhou! \n\n", cidadeA1);
          } else if (pontosturisticosA1 < pontosturisticosB1) {
            printf ("%s ganhou! \n\n", cidadeB1);
          } else { 
            printf ("Deu empate!\n\n");
          }
      break;

      case 5:
        printf ("\nAtributo escolhido: densidade populacional\n\n");
            printf ("%s tem uma densidade populacional de %.2f hab/km².\n", cidadeA1 , densidadeA1);
            printf ("%s tem uma densidade populacional de %.2f hab/km².\n", cidadeB1 , densidadeB1);
            
        if (densidadeB1 > densidadeA1) {           
            printf ("%s ganhou! \n\n", cidadeA1);
          } else if (densidadeB1 < densidadeA1) {
            printf ("%s ganhou! \n\n", cidadeB1);
          } else { 
            printf ("Deu empate!\n\n");
          }
      break;

      case 6:
        printf ("\n*** Jogo Finalizado! ***\n\n\n");
        break;

    default:
      printf("Opção inválida\n");
      
 }

    return 0;
}

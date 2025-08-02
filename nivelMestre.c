#include <stdio.h>

// Desafio Super Trunfo - Nível Mestre
// Trabalho de Flávio Maia

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    char cartaA1[5], cartaB1[5], cidadeA1[30], cidadeB1[30], estadoA1[5], estadoB1[5];
    unsigned long int populacaoA1, populacaoB1;
    float areaA1, areaB1, pibA1, pibB1, densidadeA1, densidadeB1, pibcapitaA1, pibcapitaB1;
    int pontosturisticosA1, pontosturisticosB1, resultadoAtributo1, resultadoAtributo2;
    float somaA1, somaB1, somaA2, somaB2, resultadoA1, resultadoB1;
    char* resultadofinal;
    long double superPoderA1, superPoderB1;
    
    // Cadastro das Cartas:

    // CartaA1

    printf("INSIRA DADOS DA PRIMEIRA CARTA\n\n");

    printf("Código da Carta (letra e número): \n");
    scanf("%4s", cartaA1);  

    printf("Estado (sigla): \n");
    scanf("%4s", estadoA1);

    printf("Nome da cidade: \n");
    scanf(" %29[^\n]", cidadeA1);

    printf("População: \n");
    scanf("%lu", &populacaoA1);

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
    scanf("%4s", cartaB1);
    
    printf("Estado (sigla): \n");
    scanf("%4s", estadoB1);

    printf("Nome da Cidade: \n");
    scanf(" %29[^\n]", cidadeB1);

    printf("População: \n");
    scanf("%lu", &populacaoB1);
    
    printf("Área: \n");
    scanf("%f", &areaB1);
    
    printf("PIB: \n");
    scanf("%f", &pibB1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticosB1);

        // Cálculo das densidades demográficas das cartas 1 e 2

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

        // Cálculo do PIB per capita das cartas 1 e 2

        if (populacaoA1 != 0) {
          pibcapitaA1 = (pibA1 * 1000000000.0f) / (float)populacaoA1;} // Garante que a divisão seja float
        else {
          pibcapitaA1 = 0.0f;
          printf("Aviso: população da Carta A01 é zero, PIB per capita indefinido!\n\n");
        }
        
        if (populacaoB1 != 0) {
          pibcapitaB1 = (pibB1 * 1000000000.0f) / (float)populacaoB1;} // Garante que a divisão seja float
        else {
          pibcapitaB1 = 0.0f;
          printf("Aviso: população da Carta B01 é zero, PIB per capita indefinido!\n\n");
        }

        // Cálculo do Super Poder das cartas 1 e 2

        long double inversoDensidadeA1 = 0.0L, inversoDensidadeB1 = 0.0L;

        if (densidadeA1 > 0.0L) {
          inversoDensidadeA1 = 1.0L / densidadeA1;
        }

        if (densidadeB1 > 0.0L) {
          inversoDensidadeB1 = 1.0L / densidadeB1;
        }

        superPoderA1 = (long double)populacaoA1 + areaA1 + pibA1 + pontosturisticosA1 + pibcapitaA1 + inversoDensidadeA1;
        superPoderB1 = (long double)populacaoB1 + areaB1 + pibB1 + pontosturisticosB1 + pibcapitaB1 + inversoDensidadeB1;

    // Exibição dos dados das cartas
    printf("\n\n*** CARTA %s ***\n", cartaA1);
    printf("Estado: %s\n", estadoA1);
    printf("Cidade: %s\n",cidadeA1);
    printf("População: %lu habitantes\n", populacaoA1);
    printf("Área: %.2f km²\n", areaA1);
    printf("PIB: R$ %.2f\n", pibA1);
    printf("Pontos Turísticos: %d\n", pontosturisticosA1);     
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeA1);
    printf("PIB per capita: %.2f R$/hab\n", pibcapitaA1);
    printf("Super Poder: %.2Lf", superPoderA1);

    printf("\n*** CARTA %s ***\n", cartaB1);
    printf("Estado: %s\n", estadoB1);
    printf("Cidade: %s\n",cidadeB1);
    printf("População: %lu habitantes\n", populacaoB1);
    printf("Área: %.2f km²\n", areaB1);
    printf("PIB: R$ %.2f\n", pibB1);
    printf("Pontos Turísticos: %d\n", pontosturisticosB1);     
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeB1);
    printf("PIB per capita: %.2f R$/hab\n", pibcapitaB1);
    printf("Super Poder: %.2Lf", superPoderB1);
    
    // Menu para escolha do atributo a ser comparado
    printf("\n\n*** Escolha dois atributos para comparação ***\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("8 - Sair do Jogo\n\n");

    // Variáveis para escolha dos atributos
    int atributo1, atributo2;

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo.\n");
    scanf("%d", &atributo1);

    // Utilizando switch para comparar os atributos de acordo com a primeira escolha do jogador,
    // determinando os valores das variáveis somaA1 e somaB1, que serão usadas para o cálculo do resultado final

    switch (atributo1) {
      case 1:
        printf ("\nAtributo escolhido: população\n\n");
            printf ("%s tem uma população de %lu habitantes.\n", cidadeA1 , populacaoA1);
            printf ("%s tem uma população de %lu habitantes.\n", cidadeB1 , populacaoB1);

        if (populacaoA1 > populacaoB1) {           
            printf ("1\n"); // Carta A1 venceu
            resultadoAtributo1 = 1;
          } else if (populacaoB1 > populacaoA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo1 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo1 = 0; // Representa empate
          }
      break;

      case 2:
        printf ("\nAtributo escolhido: área\n\n");
            printf ("%s tem uma área de %.2f km².\n", cidadeA1 , areaA1);
            printf ("%s tem uma área de %.2f km².\n", cidadeB1 , areaB1);

        if (areaA1 > areaB1) {           
            printf ("1\n"); // Carta A1 venceu
            resultadoAtributo1 = 1;
          } else if (areaB1 > areaA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo1 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo1 = 0; // Representa empate
          }
      break;

      case 3:
        printf ("\nAtributo escolhido: PIB\n\n");
            printf ("%s tem um PIB de %.2f R$.\n", cidadeA1 , pibA1);
            printf ("%s tem um PIB de %.2f R$.\n", cidadeB1 , pibB1);

        if (pibA1 > pibB1) {           
            printf ("1\n"); // Carta A1 venceu
            resultadoAtributo1 = 1;
          } else if (pibB1 > pibA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo1 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo1 = 0; // Representa empate
          }
      break;

      case 4:
        printf ("\nAtributo escolhido: pontos turísticos\n\n");
            printf ("%s tem %d pontos turísticos.\n", cidadeA1 , pontosturisticosA1);
            printf ("%s tem %d pontos turísticos.\n", cidadeB1 , pontosturisticosB1);
            
        if (pontosturisticosA1 > pontosturisticosB1) {           
            printf ("1\n"); // Carta A1 venceu
            resultadoAtributo1 = 1;
          } else if (pontosturisticosB1 > pontosturisticosA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo1 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo1 = 0; // Representa empate
          }
      break;

      case 5:
        printf ("\nAtributo escolhido: densidade populacional\n\n");
            printf ("%s tem uma densidade populacional de %.2f hab/km².\n", cidadeA1 , densidadeA1);
            printf ("%s tem uma densidade populacional de %.2f hab/km².\n", cidadeB1 , densidadeB1);

        if (densidadeB1 > densidadeA1) {           
            printf ("1\n"); // Carta A1 venceu
            resultadoAtributo1 = 1;
          } else if (densidadeA1 > densidadeB1 { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo1 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo1 = 0; // Representa empate
          }
      break;

      case 6:
        printf ("\nAtributo escolhido: PIB per capita\n\n");
            printf ("%s tem um PIB per capita de R$ %.2f.\n", cidadeA1 , pibcapitaA1);
            printf ("%s tem um PIB per capita de R$ %.2f.\n", cidadeB1 , pibcapitaB1);
            
        if (pibcapitaA1 > pibcapitaB1) {           
            printf ("1\n"); // Carta A1 venceu
            resultadoAtributo1 = 1;
          } else if (pibcapitaB1 > pibcapitaA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo1 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo1 = 0; // Representa empate
          }
      break;

      case 7:
        printf ("\nAtributo escolhido: Super Poder\n\n");
            printf ("%s tem um Super Poder de R$ %.2Lf.\n", cidadeA1 , superPoderA1);
            printf ("%s tem um Super Poder de R$ %.2Lf.\n", cidadeB1 , superPoderB1);
            
        if (superPoderA1 > superPoderB1) {           
           printf ("1\n"); // Carta A1 venceu
            resultadoAtributo1 = 1;
          } else if (superPoderB1 > superPoderA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo1 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo1 = 0; // Representa empate
          }
      break;

      case 8:
        printf ("\n*** Jogo Finalizado! ***\n\n\n");
        break;

    default:
      printf("Opção inválida\n");
      break;
    }
 }

    // Escolha do segundo atributo
    do {
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Erro: o segundo atributo não pode ser igual ao primeiro. Tente novamente.\n");
      } else if (atributo2 < 1 || atributo2 > 8) {
        printf("Opção inválida. Tente novamente.");
      } 
    } while (atributo1 == atributo2 || atributo2 < 1 || atributo2 > 8);
      
      { // Utilizando switch para comparar os atributos de acordo com a segunda escolha do jogador
      switch (atributo2) {
      case 1:
        printf ("\nAtributo escolhido: população\n\n");
            printf ("%s tem uma população de %lu habitantes.\n", cidadeA1 , populacaoA1);
            printf ("%s tem uma população de %lu habitantes.\n", cidadeB1 , populacaoB1);

        if (populacaoA1 > populacaoB1) {           
            printf ("1\n"); // Carta A1 venceu
            resultadoAtributo2 = 1;
          } else if (populacaoB1 > populacaoA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo2 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo2 = 0; // Representa empate
          }
      break;

      case 2:
        printf ("\nAtributo escolhido: área\n\n");
            printf ("%s tem uma área de %.2f km².\n", cidadeA1 , areaA1);
            printf ("%s tem uma área de %.2f km².\n", cidadeB1 , areaB1);

        if (areaA1 > areaB1) {           
            printf ("1\n"); // Carta A1 venceu
            resultadoAtributo2 = 1;
          } else if (areaB1 > areaA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo2 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo2 = 0; // Representa empate
          }
      break;

      case 3:
        printf ("\nAtributo escolhido: PIB\n\n");
            printf ("%s tem um PIB de %.2f R$.\n", cidadeA1 , pibA1);
            printf ("%s tem um PIB de %.2f R$.\n", cidadeB1 , pibB1);

        if (pibA1 > pibB1) {           
           printf ("1\n"); // Carta A1 venceu
            resultadoAtributo2 = 1;
          } else if (pibB1 > pibA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo2 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo2 = 0; // Representa empate
          }
      break;

      case 4:
        printf ("\nAtributo escolhido: pontos turísticos\n\n");
            printf ("%s tem %d pontos turísticos.\n", cidadeA1 , pontosturisticosA1);
            printf ("%s tem %d pontos turísticos.\n", cidadeB1 , pontosturisticosB1);

        if (pontosturisticosA1 > pontosturisticosB1) {           
           printf ("1\n"); // Carta A1 venceu
            resultadoAtributo2 = 1;
          } else if (pontosturisticosB1 > pontosturisticosA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo2 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo2 = 0; // Representa empate
          }
      break;

      case 5:
        printf ("\nAtributo escolhido: densidade populacional\n\n");
            printf ("%s tem uma densidade populacional de %.2f hab/km².\n", cidadeA1 , densidadeA1);
            printf ("%s tem uma densidade populacional de %.2f hab/km².\n", cidadeB1 , densidadeB1);

        if (densidadeB1 > densidadeA1) {           
           printf ("1\n"); // Carta A1 venceu
            resultadoAtributo2 = 1;
          } else if (densidadeA1 > densidadeB1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo2 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo2 = 0; // Representa empate
          }
      break;

      case 6:
        printf ("\nAtributo escolhido: PIB per capita\n\n");
            printf ("%s tem um PIB per capita de R$ %.2f.\n", cidadeA1 , pibcapitaA1);
            printf ("%s tem um PIB per capita de R$ %.2f.\n", cidadeB1 , pibcapitaB1);
            
        if (pibcapitaA1 > pibcapitaB1) {           
           printf ("1\n"); // Carta A1 venceu
            resultadoAtributo2 = 1;
          } else if (pibcapitaB1 > pibcapitaA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo2 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo2 = 0; // Representa empate
          }
      break;
 
      case 7:
        printf ("\nAtributo escolhido: Super Poder\n\n");
            printf ("%s tem um Super Poder de R$ %.2Lf.\n", cidadeA1 , superPoderA1);
            printf ("%s tem um Super Poder de R$ %.2Lf.\n", cidadeB1 , superPoderB1);
            
        if (superPoderA1 > superPoderB1) {           
           printf ("1\n"); // Carta A1 venceu
            resultadoAtributo2 = 1;
          } else if (superPoderB1 > superPoderA1) { // Carta B1 venceu
            printf ("2\n");
            resultadoAtributo2 = 2; // Representa que carta B1 venceu
          } else { // Empate
              printf("0\n");
              resultadoAtributo2 = 0; // Representa empate
          }
      break;

      case 8:
        printf ("\n*** Jogo Finalizado! ***\n\n\n");
        break;

    default:
      printf("Opção inválida\n");
      break;
    }
  }

  if (resultadoAtributo1 == 1 && resultadoAtributo2 == 1) {
    printf("\nCarta A01 venceu a rodada!\n");
  } else if (resultadoAtributo1 == 2 && resultadoAtributo2 == 2) {
    printf("\nCarta B01 venceu a rodada!\n");
  } else {
    printf("Empate na rodada!\n");
  }

    return 0;
}

#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //declaração das variaveis da primeira
  char pais1[20];
  char estado1[2];
  char codigo1[3];
  char cidade1[20];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  float superPoder1;
  
  

  // declaração de variáveis da segunda carta
  char pais2[20];
  char estado2[2];
  char codigo2[3];
  char cidade2[20];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float superPoder2;

  //declaração de variaveis para resultados
  int resultadoPopulacao;
  int resultadoArea;
  int resultadoPIB;
  int resultadoPontos;
  int resultadoDensidade;
  int resultadoPerCapita;
  int resultadoSuperPoder;

  // Área para entrada de dados

  //cadastro da primeira carta
  printf("===Cadastro da carta 1===\n");

  printf("Digite o país da Carta 1:\n");
  scanf("%s", pais1);

  printf("digite o estado (A-H):\n");
  scanf("%c" , &estado1);

  printf("digite o código da carta:\n");
  scanf("%s", codigo1);

  printf("digite o nome da cidade:\n");
  getchar(); // limpa o ENTER anterior
  fgets(cidade1, 20, stdin);
  cidade1[strcspn(cidade1, "\n")] = 0;

  printf("digite a população:\n");
  scanf("%d", &populacao1);

  printf("digite a area (em km²):\n");
  scanf("%f", &area1);

  printf("digite o PIB (em bilhões de reais):\n");
  scanf("%f", &pib1);

  printf("digite o numero de pontos turisticos:\n");
  scanf("%d", &pontosTuristicos1);

  //calculo de densidade populacional e PIB per capita da carta 1
  densidadePopulacional1 = (float)populacao1 / area1;
  pibPerCapita1 = (double)(pib1 * 1000000000.0) / populacao1; //calculo para bilhões

  //cálculo do super poder carta 1
  superPoder1 = 
        (float)populacao1 +
        area1 +
        pib1 +
        (float)pontosTuristicos1 +
        pibPerCapita1 +
        (1.0f / densidadePopulacional1); //inversão da densidade populacional

  //cadastro da segunda carta
  printf("===Cadastro da carta 2===\n");

  printf("Digite o país da Carta 2:\n");
  scanf("%s", pais2);

  printf("digite o estado (A-H):\n");
  scanf("%c" , &estado2);

  printf("digite o código da carta:\n");
  scanf("%s", codigo2);

  printf("digite o nome da cidade:\n");
  getchar();
  fgets(cidade2, 20, stdin);
  cidade2[strcspn(cidade2, "\n")] = 0;

  printf("digite a população:\n");
  scanf("%d", &populacao2);

  printf("digite a area (em km²):\n");
  scanf("%f", &area2);

  printf("digite o PIB (em bilhões de reais):\n");
  scanf("%f", &pib2);

  printf("digite o numero de pontos turisticos:\n");
  scanf("%d", &pontosTuristicos2);

  //calculo de densidade populacional e PIB per capita da carta 2
  densidadePopulacional2 = (float)populacao2 / area2;
  pibPerCapita2 = (double)(pib2 * 1000000000.0) / populacao2;

  //cálculo do super poder carta 2
  superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        (float)pontosTuristicos2 +
        pibPerCapita2 +
        (1.0f / densidadePopulacional2);

  
  
  // Área para exibição dos dados da cidade
  printf("===carta 1===\n");
  printf("país: %s\n", pais1);
  printf("Estado: %c\n" , estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d de pessoas\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB Per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);
  
  printf("===carta 2===\n");
  printf("país: %s\n", pais2);
  printf("Estado: %c\n" , estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d de pessoas\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB Per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  // MENU INTERATIVO
  int opcao;
  printf("\n=== MENU DE COMPARAÇÃO ===\n");
  printf("Escolha o atributo para comparar:\n");
  printf("1 - País\n");
  printf("2 - População\n");
  printf("3 - Área\n");
  printf("4 - PIB\n");
  printf("5 - Pontos Turísticos\n");
  printf("6 - Densidade Demográfica (menor vence)\n");
  printf("7 - PIB per Capita\n");
  printf("8 - Super Poder\n");
  printf("Opção: ");
  scanf("%d", &opcao);

  printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

  switch (opcao) {
    case 1:
      printf("\n--- Comparação Informativa: País ---\n");
      printf("Carta 1 pertence ao país: %s\n", pais1);
      printf("Carta 2 pertence ao país: %s\n", pais2);
      printf("Este atributo não define vencedor.\n");
    break;

    case 2: // POPULAÇÃO
      printf("Atributo escolhido: População\n");
      printf("%s: %lu habitantes\n", cidade1, populacao1);
      printf("%s: %lu habitantes\n", cidade2, populacao2);

      if (populacao1 > populacao2) {
        printf("Cidade Vencedora: %s\n", cidade1);
      } else {
        if (populacao2 > populacao1) {
          printf("Cidade Vencedora: %s\n", cidade2);
        } else {
          printf("Empate!\n");
        }
      }
    break;

    case 3: // ÁREA
      printf("Atributo escolhido: Área\n");
      printf("%s: %.2f km²\n", cidade1, area1);
      printf("%s: %.2f km²\n", cidade2, area2);

      if (area1 > area2) {
        printf("Cidade Vencedora: %s\n", cidade1);
      } else {
        if (area2 > area1) {
          printf("Cidade Vencedora: %s\n", cidade2);
        } else {
          printf("Empate!\n");
        }
      }
    break;

    case 4: // PIB
      printf("Atributo escolhido: PIB\n");
      printf("%s: %.2f bilhões\n", cidade1, pib1);
      printf("%s: %.2f bilhões\n", cidade2, pib2);

      if (pib1 > pib2) {
        printf("Cidade Vencedora: %s\n", cidade1);
      } else {
        if (pib2 > pib1) {
          printf("Cidade Vencedora: %s\n", cidade2);
        } else {
          printf("Empate!\n");
        }
      }
    break;

    case 5: // Pontos turísticos
      printf("Atributo escolhido: Pontos Turísticos\n");
      printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
      printf("%s: %d pontos\n", cidade2, pontosTuristicos2);

      if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Cidade Vencedora: %s\n", cidade1);
      } else {
        if (pontosTuristicos2 > pontosTuristicos1) {
          printf("Cidade Vencedora: %s\n", cidade2);
        } else {
          printf("Empate!\n");
        }
      }
    break;

    case 6: // Densidade (menor vence)
      printf("Atributo escolhido: Densidade Demográfica\n");
      printf("%s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
      printf("%s: %.2f hab/km²\n", cidade2, densidadePopulacional2);

      if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Cidade Vencedora: %s\n", cidade1);
      } else {
        if (densidadePopulacional2 < densidadePopulacional1) {
          printf("Cidade Vencedora: %s\n", cidade2);
        } else {
          printf("Empate!\n");
        }
      }
    break;

    case 7: // PIB per capita
      printf("Atributo escolhido: PIB per Capita\n");
      printf("%s: %.2f reais\n", cidade1, pibPerCapita1);
      printf("%s: %.2f reais\n", cidade2, pibPerCapita2);

      if (pibPerCapita1 > pibPerCapita2) {
        printf("Cidade Vencedora: %s\n", cidade1);
      } else {
        if (pibPerCapita2 > pibPerCapita1) {
          printf("Cidade Vencedora: %s\n", cidade2);
        } else {
          printf("Empate!\n");
        }
      }
    break;

    case 8: // Super poder
      printf("Atributo escolhido: Super Poder\n");
      printf("%s: %.2f pontos\n", cidade1, superPoder1);
      printf("%s: %.2f pontos\n", cidade2, superPoder2);

      if (superPoder1 > superPoder2) {
        printf("Cidade Vencedora: %s\n", cidade1);
      } else {
        if (superPoder2 > superPoder1) {
          printf("Cidade Vencedora: %s\n", cidade2);
        } else {
          printf("Empate!\n");
        }
      }
    break;

    default:
      printf("Opção inválida.\n");
    break;
  }

  return 0;
}

#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //declaração das variaveis da primeira
  char pais1[20];
  char estado1[20];
  char codigo1[4];
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
  char estado2[20];
  char codigo2[4];
  char cidade2[20];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float superPoder2;

  // variáveis para comparação dos atributos

  float valorA1, valorA2;   // valores do atributo 1 para cada carta
  float valorB1, valorB2;   // valores do atributo 2 para cada carta
  int atributo1, atributo2; // opções escolhidas
  
  char nomeAtributo1[30];
  char nomeAtributo2[30];

  



  // Área para entrada de dados

  //cadastro da primeira carta
  printf("===Cadastro da carta 1===\n");

  printf("Digite o país da Carta:\n");
  scanf("%s", pais1);

  printf("digite o nome do estado (A-H):\n");
  getchar(); // limpa o ENTER anterior
  fgets(estado1, 20, stdin);
  estado1[strcspn(estado1, "\n")] = 0;

  printf("digite o código da carta:\n");
  scanf("%s", codigo1);

  printf("digite o nome da cidade:\n");
  getchar(); 
  fgets(cidade1, 20, stdin);
  cidade1[strcspn(cidade1, "\n")] = 0;

  printf("digite a população:\n");
  scanf("%lu", &populacao1);

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
  superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + 
                (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1); //inversão da densidade populacional

  //cadastro da segunda carta
  printf("===Cadastro da carta 2===\n");

  printf("Digite o país da Carta:\n");
  scanf("%s", pais2);

  printf("digite o nome do estado (A-H):\n");
  getchar();
  fgets(estado2, 20, stdin);
  estado2[strcspn(estado2, "\n")] = 0;

  printf("digite o código da carta:\n");
  scanf("%s", codigo2);

  printf("digite o nome da cidade:\n");
  getchar();
  fgets(cidade2, 20, stdin);
  cidade2[strcspn(cidade2, "\n")] = 0;

  printf("digite a população:\n");
  scanf("%lu", &populacao2);

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
  superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + 
                (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

  
    
  // Área para exibição dos dados da cidade
  printf("===carta 1===\n");
  printf("país: %s\n", pais1);
  printf("Estado: %s\n" , estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %lu de pessoas\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB Per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);
  
  printf("===carta 2===\n");
  printf("país: %s\n", pais2);
  printf("Estado: %s\n" , estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu de pessoas\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB Per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  // MENU INTERATIVO
  printf("=== MENU DE COMPARAÇÃO ===\n");
  printf("Escolha o PRIMEIRO atributo:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - Densidade Demográfica (menor vence)\n");
  printf("6 - PIB per Capita\n");
  printf("7 - Super Poder\n");
  printf("Opção: ");
  scanf("%d", &atributo1);

  switch (atributo1) {
   case 1:
    valorA1 = populacao1;
    valorA2 = populacao2;
    strcpy(nomeAtributo1, "População");
    break;

    case 2:
      valorA1 = area1;
      valorA2 = area2;
      strcpy(nomeAtributo1, "Área");
      break;

    case 3:
      valorA1 = pib1;
      valorA2 = pib2;
      strcpy(nomeAtributo1, "PIB");
      break;

    case 4:
      valorA1 = pontosTuristicos1;
      valorA2 = pontosTuristicos2;
      strcpy(nomeAtributo1, "Pontos Turísticos");
      break;

    case 5:
      valorA1 = 1.0f / densidadePopulacional1;
      valorA2 = 1.0f / densidadePopulacional2;
      strcpy(nomeAtributo1, "Densidade Demográfica");
      break;

    case 6:
      valorA1 = pibPerCapita1;
      valorA2 = pibPerCapita2;
      strcpy(nomeAtributo1, "PIB per Capita");
      break;

    case 7:
      valorA1 = superPoder1;
      valorA2 = superPoder2;
      strcpy(nomeAtributo1, "Super Poder");
      break;

    default:
      printf("Opção inválida.\n");
      return 0;
      }



    
    printf("\nEscolha o SEGUNDO atributo:\n");

    (atributo1 != 1) ? printf("1 - População\n") : 0;
    (atributo1 != 2) ? printf("2 - Área\n") : 0;
    (atributo1 != 3) ? printf("3 - PIB\n") : 0;
    (atributo1 != 4) ? printf("4 - Pontos Turísticos\n") : 0;
    (atributo1 != 5) ? printf("5 - Densidade Demográfica (menor vence)\n") : 0;
    (atributo1 != 6) ? printf("6 - PIB per Capita\n") : 0;
    (atributo1 != 7) ? printf("7 - Super Poder\n") : 0;

    printf("Opção: ");
    scanf("%d", &atributo2);



    switch (atributo2) {
    case 1:
      valorB1 = populacao1;
      valorB2 = populacao2;
      strcpy(nomeAtributo2, "População");
      break;

    case 2:
      valorB1 = area1;
      valorB2 = area2;
      strcpy(nomeAtributo2, "Área");
      break;

    case 3:
      valorB1 = pib1;
      valorB2 = pib2;
      strcpy(nomeAtributo2, "PIB");
      break;

    case 4:
      valorB1 = pontosTuristicos1;
      valorB2 = pontosTuristicos2;
      strcpy(nomeAtributo2, "Pontos Turísticos");
      break;

    case 5:
      valorB1 = 1.0f / densidadePopulacional1;
      valorB2 = 1.0f / densidadePopulacional2;
      strcpy(nomeAtributo2, "Densidade Demográfica");
      break;

    case 6:
      valorB1 = pibPerCapita1;
      valorB2 = pibPerCapita2;
      strcpy(nomeAtributo2, "PIB per Capita");
      break;

    case 7:
      valorB1 = superPoder1;
      valorB2 = superPoder2;
      strcpy(nomeAtributo2, "Super Poder");
      break;

    default:
      printf("Opção inválida.\n");
      return 0;
  }
  // comparação dos atributos escolhidos
  float soma1 = valorA1 + valorB1;
  float soma2 = valorA2 + valorB2;

  printf("\n=== RESULTADO FINAL ===\n");
  
  printf("Carta 1 pertence ao país: %s | Carta 2 pertence ao país: %s\n", pais1, pais2); 

  printf("Atributo 1 (%s): Carta 1 = %.2f | Carta 2 = %.2f\n",
        nomeAtributo1, valorA1, valorA2);

  printf("Atributo 2 (%s): Carta 1 = %.2f | Carta 2 = %.2f\n",
        nomeAtributo2, valorB1, valorB2);

  printf("Pontuação da Carta 1: %.2f\n", soma1);

  printf("Pontuação da Carta 2: %.2f\n", soma2);

  if (soma1 > soma2) {
      printf("Cidade vencedora: %s\n", cidade1);
  } else {
      if (soma2 > soma1) {
          printf("Cidade vencedora: %s\n", cidade2);
      } else {
          printf("Empate!\n");
      }
  }
  




  

  return 0;
}

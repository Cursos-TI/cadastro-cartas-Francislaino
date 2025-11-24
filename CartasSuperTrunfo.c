#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //declaração das variaveis da primeira
  char estado1;
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
  char estado2;
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
  printf("digite a letra da carta do estado (A-H):\n");
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
  printf("digite a letra da carta do estado (A-H):\n");
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

  //comparaçoes 
  resultadoPopulacao   = populacao1 > populacao2;
  resultadoArea        = area1 > area2;
  resultadoPIB         = pib1 > pib2;
  resultadoPontos      = pontosTuristicos1 > pontosTuristicos2;
  resultadoDensidade   = densidadePopulacional1 < densidadePopulacional2; // menor vence
  resultadoPerCapita   = pibPerCapita1 > pibPerCapita2;
  resultadoSuperPoder  = superPoder1 > superPoder2;
  
  
  // Área para exibição dos dados da cidade
  printf("===carta 1===\n");
  printf("Estado: %c\n" , estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d de pessoas\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB Per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n\n", superPoder1);
  
  printf("===carta 2===\n");
  printf("Estado: %c\n" , estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d de pessoas\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB Per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n\n", superPoder2);

  printf("===Comparacao de Cartas===\n");
  printf("População: (%d)\n", resultadoPopulacao);
  printf("Área: (%d)\n", resultadoArea);
  printf("PIB: (%d)\n", resultadoPIB);
  printf("Pontos Turísticos: (%d)\n", resultadoPontos);
  printf("Densidade Populacional:(%d)\n", resultadoDensidade);
  printf("PIB per Capita: (%d)\n", resultadoPerCapita);
  printf("Super Poder: (%d)\n", resultadoSuperPoder);
  
  return 0;
} 

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 char estado1;
 char codigo1 [4];
 char nomeCidade1 [50];
 int populacao1;
 float area1;
 float pib1;
 int pontosTuristicos1;

 // carta 2
char estado2;
 char codigo2 [4];
 char nomeCidade2 [50];
 int populacao2;
 float area2;
 float pib2;
 int pontosTuristicos2;

  // Área para entrada de dados

  printf("cadastro da carta 1:\n\n");

  printf("Digite o Estado: ");
  scanf(" %c" ,&estado1 );

  printf("Digite o Codigo Da Carta (Ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o Nome Da Cidade: ");
  scanf(" %s[^\n]", nomeCidade1 );

  printf("Digite a População: ");
  scanf(" %S", &populacao1);

  printf("Digite a Area:  ");
  scanf(" %f" , &area1);

  printf("Digite o Pib (em bilhoes): ");
  scanf(" %f",&pib1);

  printf("Digite o Numero de pontos Turisticos: ");
  scanf("%d" , &pontosTuristicos1);

   printf("cadastro da carta 2\n\n");

  printf("Digite o Estado: ");
  scanf(" %c" ,&estado2 );

  printf("Digite o Codigo Da Carta (Ex: A01): ");
  scanf("%s", codigo2);

  printf("Digite o Nome Da Cidade: ");
  scanf(" %s[^\n]", nomeCidade2 );

  printf("Digite a População: ");
  scanf(" %S", &populacao2);

  printf("Digite a Area: ");
  scanf(" %f" , &area2);

  printf("Digite o Pib (em bilhoes): ");
  scanf(" %f",&pib2);

  printf("Digite o Numero de pontos Turisticos: ");
  scanf(" %d" , &pontosTuristicos2);
  // Área para exibição dos dados da cidade



  // Area de calculos

   float densidade1 = populacao1 /  area1;
   float densidade2 = populacao2 / area2;

   float pibPerCapita1 =(pib1 * 1000000000,0)/ populacao1;
   float pibPerCapita2 =(pib1 * 1000000000,0)/ populacao2;
   

   printf("\n=============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);




return 0;
} 

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 char estado1;
 char codigo1 [4];
 char nomeCidade1 [50];
 unsigned long  int populacao1;
 float area1;
 float pib1;
 int pontosTuristicos1;

 // carta 2
char estado2;
 char codigo2 [4];
 char nomeCidade2 [50];
unsigned long int populacao2;
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
   float pibPerCapita1 =(pib1 * 1000000000,0)/ populacao1;
       superPoder1 = 
        (float)populacao1 +
        area1 +
        pib1 +
        pontos1 +
        pibCap1 +
        (1.0 / dens1);

   float densidade2 = populacao2 / area2;
   float pibPerCapita2 =(pib1 * 1000000000,0)/ populacao2;
       superPoder2 = 
        (float)populacao2 +
        area2 +
        pib2 +
        pontos2 +
        pibCap2 +
        (1.0 / dens2);
   
   
   //comparaçoes de cartas.

    printf("\n\n=== Comparação de Cartas ===\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    // Densidade → MENOR vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dens1 < dens2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCap1 > pibCap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);


   




return 0;
} 

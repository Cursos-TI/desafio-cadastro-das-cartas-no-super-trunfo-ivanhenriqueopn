
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //Título do jogo.
   printf("###SUPER TRUNFO###\n"); 
   printf("\n"); //pular linha

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    /*
    Esta função define as variáveis de duas cartas.
    Parâmetro
    Vaiáveis com final 1, indica a carta 1.
    Vaiáveis com final 2, indica a carta 2.
    */
   char estado1, estado2; 
   char codigocarta1[3], codigocarta2[3];
   char nomecidade1[20], nomecidade2[20];
   int populacao1, populacao2; 
   int pontos_turisticos1, pontos_turisticos2; 
   float area_km1, area_km2; 
   float pib1, pib2; 
   float densidade1, densidade2; //adiconado densidade referente ao nível aventureiro.
   float PIBperc1, PIBperc2; //adiconado PIB per Capita referente ao nível aventureiro.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    /*
    Funções abaixo são: Entrada e saída de dados.
    Primeiro entrada com os dados da carta 1.
    Segundo entrada com os dados da carta 2.
    */
   printf("A carta 1: \n");

   printf("\n");//pular linha

   printf("Insira a letra correspondente ao estado da carta 1: ");
   scanf("%c", &estado1);
   printf("Insira o código do estado da carta 1: ");
   scanf("%s", &codigocarta1);
   printf("Insira o nome da cidade correspondente a carta 1: ");
   scanf("%s", &nomecidade1);
   printf("Insira a população da cidade correspondente a carta 1: ");
   scanf("%d", &populacao1);
   printf("Insira a área por KM² da cidade correspondente a carta 1: ");
   scanf("%f", &area_km1);
   printf("Insira o PIB da cidade correspondente a carta carta 1: ");
   scanf(" %f", &pib1);
   printf("Insira a quantidade de pontos turísticos da cidade da carta 1: ");
   scanf("%d", &pontos_turisticos1);
   

   printf("\n");//pular linha

   printf("A carta 2: \n");
   
   printf("\n");//pular linha

   printf("Insira a letra correspondente ao estado da carta 2: ");
   scanf(" %c", &estado2);
   printf("Insira o código da cidade correspondente a carta 2: ");
   scanf("%s", codigocarta2);
   printf("Insira o nome da cidade correspondente a carta 2: ");
   scanf("%s", &nomecidade2);
   printf("Insira a população da cidade correspondente a carta 2: ");
   scanf("%d", &populacao2);
   printf("Insira a área por KM² da cidade correspondente a carta 2: ");
   scanf("%f", &area_km2);
   printf("Insira o PIB da cidade correspondente a carta 2: ");
   scanf("%f", &pib2);
   printf("Insira a quantidade de pontos turísticos da cidade da carta 2: ");
   scanf("%d", &pontos_turisticos2);

   printf("\n");//pular linha
  

/*
Esta função cálcula a divisão da Densidade populacional e PIB per Capita.
float densidade1 = densidade1 = populacao1 / area_km1
float densidade2 = densidade2 = populacao2 / area_km2
*/

   densidade1 = (float) (populacao1 / area_km1); //densidade populacional = população / area por KM² (carta 1)
   densidade2 = (float) (populacao2 / area_km2); //densidade populacional = população / area por KM² (carta 2)
   PIBperc1 = (float) (populacao1 / pib1); //PIB per Capita = população / pib (carta 1)
   PIBperc2 = (float) (populacao2/ pib2); //PIB per Capita = população / pib (carta 2)

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /*
    Finalizando, mostrando os dados das cartas 1 e carta 2.
    Dados referente so que foi inserido anteriormente.
    */
    printf("Carta 1:\n");
    printf("\n");//pular linha

    printf("A letra que representa o estado é: %c \n", estado1);
    printf("O código que representa o estado é: %s \n", codigocarta1);
    printf("O nome da cidade é: %s \n", nomecidade1);
    printf("A quantidade populacional da cidade é: %d\n", populacao1);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontos_turisticos1);
    printf("A área da cidade é: %.2f KM²\n", area_km1);
    printf("O PIB da cidade é: %.2f bilhões de reais\n", pib1);
    printf("A Densidade Populacional da cidade é: %.2f hab/KM²\n", densidade1); //Adicionado a exibição da densidade populacional da carta 1
    printf("O PIB per Capita da cidade é: %.2f $\n",  PIBperc1); //Adicionado o PIB per Capita da carta 1

    printf("\n");//pular linha
    
    printf("Carta 2:\n");
    printf("\n");//pular linha

    printf("A letra que representa o estado é: %c \n", estado2);
    printf("O código que representa o estado é: %s \n", codigocarta2);
    printf("O nome da cidade é: %s \n", nomecidade2);
    printf("A quantidade populacional da cidade é: %d\n", populacao2);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontos_turisticos2);
    printf("A área da cidade é: %.2f KM²\n", area_km2);
    printf("O PIB da cidade é: %.2f bilhões de reais\n", pib2);
    printf("A Densidade Populacional da carta 2 é: %.2f hab/KM²\n", densidade2); //Adicionado a exibição da densidade populacional da carta 1
    printf("O PIB per Capita da carta 2 é: %.2f $\n",  PIBperc2); //Adicionado o PIB per Capita da carta 1


    return 0;

}
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //Título
   printf("###SUPER TRUNFO###\n"); 

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    /*
    Abaixo, definindo as variáveis
    variavel seguido do número 1, representa carta 1
    variavel seguido do número 2, representa carta 2

    */
   char estado1, estado2; 
   char codigocarta1[20]; 
   char codigocarta2[20];
   char nomecidade1[20];
   char nomecidade2[20];
   int populacao1, populacao2; 
   int pontos_turisticos1, pontos_turisticos2; 
   float area_km1, area_km2; 
   float pib1, pib2; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    /*
    Entradas e saídas de dados
    primero solicitando e depois inserindo os dados da carta 1
    exemplo: letra da carta1 = 'A'
    código da carta 1 = "A01"
    nome da cidade: Goiana
    e assim sucessivamente.
    Após inserir os dados da carta 1, inserir o da carta 2
    exemplo: letra da carta2 = 'B'
    código da carta 1 = "B01"
    nome da cidade exemplo: Acaú
    e assim sucessivamente.
    
    */
   printf("A carta 1: \n");
   printf("Insira a letra correspondente ao estado: ");
   scanf("%c", &estado1);
   printf("Insira o código do estado: ");
   scanf("%s", &codigocarta1);
   printf("Insira o nome da cidade: ");
   scanf("%s", &nomecidade1);
   printf("Insira a população da cidade: ");
   scanf("%d", &populacao1);
   printf("Insira a quantidade de pontos turísticos da cidade: ");
   scanf("%d", &pontos_turisticos1);
   printf("Insira a área por KM² da cidade: ");
   scanf("%f", &area_km1);
   printf("Insira o PIB da cidade: ");
   scanf(" %f", &pib1);

   printf("A carta 2: \n");
   
   printf("Insira a letra correspondente ao estado: ");
   scanf(" %c", &estado2);
   printf("Insira o código da cidade: ");
   scanf("%s", codigocarta2);
   printf("Insira o nome da cidade: ");
   scanf("%s", &nomecidade2);
   printf("Insira a população da cidade: ");
   scanf("%d", &populacao2);
   printf("Insira a quantidade de pontos turísticos da cidade: ");
   scanf("%d", &pontos_turisticos2);
   printf("Insira a área por KM² da cidade: ");
   scanf("%f", &area_km2);
   printf("Insira o PIB da cidade: ");
   scanf("%f", &pib2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /*
    Finalizando, mostrando os dados das cartas 1 e carta 2
    deacordo com oque foi inserido anteriormente
    */
    printf("Carta 1:\n");
    printf("A letra que representa o estado é: %c \n", estado1);
    printf("O código que representa o estado é: %s \n", codigocarta1);
    printf("O nome da cidade é: %s \n", nomecidade1);
    printf("A população da cidade é: %d\n", populacao1);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontos_turisticos1);
    printf("A área por KM² da cidade é: %.2f\n", area_km1);
    printf("O PIB da cidade é: %.2f\n", pib1);

    printf("Carta 2:\n");
    printf("A letra que representa o estado é: %c \n", estado2);
    printf("O código que representa o estado é: %s \n", codigocarta2);
    printf("O nome da cidade é: %s \n", nomecidade2);
    printf("A população da cidade é: %d\n", populacao2);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontos_turisticos2);
    printf("A área por KM² da cidade é: %.2f\n", area_km2);
    printf("O PIB da cidade é: %.2f\n", pib2);

    return 0;

}

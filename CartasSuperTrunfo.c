#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf ("***Super Trunfo***\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codcidade, populacao, area, pib, turistico;
    char nome[30];
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("digite o código número da cidade: \n");
    scanf("%d", &codcidade);

    printf("digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("digite a área da cidade: \n");
    scanf("%d", &area);

    printf("digite o PIB da cidade: \n");
    scanf("%d", &pib);

    printf("digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &turistico);
    

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Codigo da cidade: %d\n", codcidade);
    printf("Nome cidade: %s\n", nome);
    printf("População total: %d Milhões\n", populacao);
    printf("Área total: %d KM²\n", area);
    printf("PIB é: %d Bilhões\n", pib);
    printf("Totado de pontos turisticos: %d\n", turistico);

    return 0;

}

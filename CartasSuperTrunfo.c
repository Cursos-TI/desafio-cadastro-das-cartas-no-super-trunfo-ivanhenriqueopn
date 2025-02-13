#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigocidade, numeroturistico, area;
    float populacao;
    double pib;
    char nome [20];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Super trunfo\n", nome);

    printf ("insira o nome da cidade:\n", nome);
    scanf ("%s", &nome);

    printf ("insira o codigo da cidade:\n", codigocidade);
    scanf ("%d", &codigocidade);

    printf ("insira a população da cidade:\n", populacao);
    scanf ("%f", &populacao);

    printf ("insira a area da cidade:\n", area);
    scanf ("%d", &area);

    printf ("insira quantidade de pontos turisticos da cidade:\n", numeroturistico);
    scanf ("%d", &numeroturistico);
    
    printf ("insira o pib da cidade:\n", pib);
    scanf ("%d", &pib);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf ("nome da cidade: %s\n", nome);
    printf ("codigo da cidade: %d\n", codigocidade);
    printf ("população da cidade: %.3f milhões\n", populacao);
    printf ("área da area: %.3d kM²\n", area);
    printf ("quantidade de pontos turisticos: %d\n", numeroturistico);
    printf ("pib da cidade: %.2d mil\n", pib);

    return 0;
}

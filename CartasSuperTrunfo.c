#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado['A'], cidade[8], codigo[1];
    int população, turisticos;
    float área, PIB;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("Carta 01\n");
    printf ("Estado: ");
    scanf ("%s", estado);
    printf ("Código da carta: ");
    scanf ("%s", codigo);
    printf ("Nome da cidade: ");
    scanf ("%s", cidade);
    printf ("População: ");
    scanf ("%d", &população);
    printf ("Área: ");
    scanf("%f", &área);
    printf ("PIB: ");
    scanf ("%f", &PIB);
    printf ("Número de pontos turísticos: ");
    scanf ("%d\n", &turisticos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf ("CARTA 01\n");
    printf ("Estado: %s\n", estado);
    printf ("Código da carta: %s\n", codigo);
    printf ("Nome da cidade: %s\n", cidade);
    printf ("População: %d\n", população);
    printf ("Área: %f km²\n", área);
    printf ("PIB: %f Bilhões de reais\n ", PIB);
    printf ("Número de pontos turísticos: %d\n", turisticos);

    return 0;
}
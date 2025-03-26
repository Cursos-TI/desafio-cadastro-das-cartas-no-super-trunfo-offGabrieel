#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado[50], cidade[50], codigo[50];
    int populacao, turisticos;
    float area, PIB;
    float densidade;
    float capita;

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
    scanf ("%d", &populacao);
    printf ("Área: ");
    scanf("%f", &area);
    printf ("PIB: ");
    scanf ("%f", &PIB);
    printf ("Número de pontos turísticos: ");
    scanf ("%d", &turisticos);
    printf ("\n\n\n");
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf ("CARTA 01\n");
    printf ("Estado: %s\n", estado);
    printf ("Código da carta: %s\n", codigo);
    printf ("Nome da cidade: %s\n", cidade);
    printf ("População: %d Habitantes\n", populacao);
    printf ("Área: %.3f km²\n", area);
    printf ("PIB: %.2f Bilhões de reais\n", PIB);
    printf ("Número de pontos turísticos: %d\n", turisticos);
    
    densidade = (float)(populacao / area);
    capita = (float)(PIB / populacao);
    
    
    printf ("Densidade Populacional:  %.2f hab/km²\n", densidade);
    printf ("PIB per Capita:  %.2f reais\n", capita);
    printf ("\n\n\n");

    // CARTA 02

    char estado2[50], cidade2[50], codigo2[50];
    int populacao2, turisticos2;
    float area2, PIB2;
    float densidade2;
    float capita2;

    // Cadastro das Cartas:

    printf ("Carta 02\n");
    printf ("Estado: ");
    scanf ("%s", estado2);
    printf ("Código da carta: ");
    scanf ("%s", codigo2);
    printf ("Nome da cidade: ");
    scanf ("%s", cidade2);
    printf ("População: ");
    scanf ("%d", &populacao2);
    printf ("Área: ");
    scanf("%f", &area2);
    printf ("PIB: ");
    scanf ("%f", &PIB2);
    printf ("Número de pontos turísticos: ");
    scanf ("%d", &turisticos2);
    printf ("\n\n\n");

    // Exibição dos Dados das Cartas:

    printf ("CARTA 02\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código da carta: %s\n", codigo2);
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("População: %d Habitantes\n", populacao2);
    printf ("Área: %.3f km²\n", area2);
    printf ("PIB: %.2f Bilhões de reais\n", PIB2);
    printf ("Número de pontos turísticos: %d\n", turisticos2);
    
    densidade2 = (float)(populacao2 / area2);
    capita2 = (float)(PIB2 / populacao2);
    
    
    printf ("Densidade Populacional:  %.2f hab/km²\n", densidade2);
    printf ("PIB per Capita:  %.2f reais\n", capita2);
    
    return 0;
}

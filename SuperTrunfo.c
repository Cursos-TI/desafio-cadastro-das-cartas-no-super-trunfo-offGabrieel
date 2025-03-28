#include <stdio.h>

// Desafio Super Trunfo - Países
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

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
    printf ("\n\n\n");
    
    // Calcular o Super Poder
    
    float densidadeInversa = (float)(area / populacao);
    float densidadeInversa2 = (float)(area2 / populacao2);
    
    float poder1 = populacao + area + PIB + turisticos + capita + densidadeInversa;
    float poder2 = populacao2 + area2 + PIB2 + turisticos2 + capita2 + densidadeInversa2;
    
    printf("SUPER PODER CARTA 01: %.2f\n", poder1);
    printf("SUPER PODER CARTA 02: %.2f\n", poder2);
    printf ("\n\n\n");
    
    // Comparação das cartas
    
    printf("Comparação das cartas!\n");
    
    int resultado = populacao > populacao2;
    resultado = (resultado == 0) + 1;
    printf("População: carta %d venceu!(%d)\n", resultado, (populacao > populacao2));

    resultado = area > area2;
    resultado = (resultado == 0) + 1;
    printf("Area: carta %d venceu!(%d)\n", resultado, (area > area2));

    resultado = PIB > PIB2;
    resultado = (resultado == 0) + 1;
    printf("PIB: carta %d venceu!(%d)\n", resultado, (PIB > PIB2));

    resultado = turisticos > turisticos2;
    resultado = (resultado == 0) + 1;
    printf("Pontos turisticos: carta %d venceu!(%d)\n", resultado, (turisticos > turisticos2));

    resultado = densidade < densidade2;
    resultado = (resultado == 0) + 1;
    printf("Densidade populacional: carta %d venceu!(%d)\n", resultado, (densidade < densidade2));

    resultado = capita > capita2;
    resultado = (resultado == 0) + 1;
    printf("PIB per capita: carta %d venceu!(%d)\n", resultado, (capita > capita2));

    resultado = poder1 > poder2;
    resultado = (resultado == 0) + 1;
    printf("Super poder: carta %d venceu!(%d)\n", resultado, (poder1 > poder2));
    
    return 0;
}

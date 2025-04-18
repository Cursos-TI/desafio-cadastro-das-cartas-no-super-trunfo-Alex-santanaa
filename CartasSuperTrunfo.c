#include <stdio.h>

int main() {
    
    // Variáveis para a Carta 1
    char estado1, codigo1[5], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Variáveis para a Carta 2
    char estado2, codigo2[5], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Leitura dos dados da Carta 1
    printf("Informe os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade1);  // Para permitir ler o nome com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nInforme os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade2);  // Para permitir ler o nome com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);  // %.2f Exibe a área com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);  //%.2f Exibe o PIB com 2 casas decimais
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);  // Exibe a área com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib2);  // Exibe o PIB com 2 casas decimais
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

#include <stdio.h>

int main() {
    int codigo;
    char nome[50];
    int populacao;
    float area, pib;
    int pontos_turisticos;

    // Cadastro da cidade
    printf("Código da cidade: ");
    scanf("%d", &codigo);

    getchar();  // Para consumir o caractere de nova linha deixado pelo scanf anterior

    printf("Nome da cidade: ");
    scanf("%[^\n]", nome);  // Agora funciona corretamente

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\nCidade cadastrada:\n");
    printf("Código: %d\nNome: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos turísticos: %d\n",
           codigo, nome, populacao, area, pib, pontos_turisticos);

    return 0;
}

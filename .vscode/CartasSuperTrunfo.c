#include <stdio.h>

int main() {
    char estado1[3], codigo1[10], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    char estado2[3], codigo2[10], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado: ");
    scanf(" %s", estado1);

    printf("Digite o Codigo da Carta: ");
    scanf(" %s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao1);

    printf("Digite a Area em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf(" %f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado: ");
    scanf(" %s", estado2);

    printf("Digite o Codigo da Carta: ");
    scanf(" %s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a Area em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf(" %f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
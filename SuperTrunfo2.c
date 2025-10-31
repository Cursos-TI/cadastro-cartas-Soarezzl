#include <stdio.h>

int main() {

    // Carta 1 - Paraná
    char estado1[10] = "PR";
    char codigo1[5] = "A01";
    char nomeCidade1[50] = "Curitiba";
    int populacao1 = 160000;
    float area1 = 4335.04;
    float pib1 = 1450000000.0;
    int pontosTuristicos1 = 35;

    // Carta 2 - Rio de Janeiro
    char estado2[5] = "RJ";
    char codigo2[10] = "A02";
    char nomeCidade2[30] = "Rio de Janeiro";
    int populacao2 = 900000;
    float area2 = 1182.30;
    float pib2 = 3660000000000.0;
    int pontosTuristicos2 = 40;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    printf("Comparacao de cartas (Atributo: PIB per capita)\n\n");

    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%s): %.2f\n\n", nomeCidade2, estado2, pibPerCapita2);

    // Comparação o maior PIB per capita vence!!!!
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    return 0;
}

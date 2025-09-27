#include <stdio.h>

int main() {
    // Dados das cartas
    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2;
    int pts1, pts2;
    float dens1, dens2, pc1, pc2, sp1, sp2;

    // Entrada Carta 1
    printf("=== Carta 1 ===\n");
    printf("Populacao: ");
    scanf("%lu", &pop1);
    printf("Area km: ");
    scanf("%f", &area1);
    printf("PIB bilhoes R$: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pts1);

    // Entrada Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Populacao: ");
    scanf("%lu", &pop2);
    printf("Area km: ");
    scanf("%f", &area2);
    printf("PIB bilhoes R$: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pts2);

    // Cálculos
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    pc1 = (pib1 * 1000000000.0) / pop1;
    pc2 = (pib2 * 1000000000.0) / pop2;

    sp1 = pop1 + area1 + pib1 + pts1 + pc1 + (1.0 / dens1);
    sp2 = pop2 + area2 + pib2 + pts2 + pc2 + (1.0 / dens2);

    // Comparações
    printf("\n=== Comparacao ===\n");
    printf("Populacao: Carta %d venceu\n", (pop1 > pop2) ? 1 : 2);
    printf("Area: Carta %d venceu\n", (area1 > area2) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos Turisticos: Carta %d venceu\n", (pts1 > pts2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (dens1 < dens2) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", (pc1 > pc2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", (sp1 > sp2) ? 1 : 2);

    return 0;
}
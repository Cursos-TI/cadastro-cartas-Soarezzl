#include <stdio.h>
#include <string.h>

int main() {

    char pais1[60] = "Brasil";
    char pais2[60] = "Alemanha";

    int populacao1 = 2167000000;
    int populacao2 = 676000000;

    float area1 = 84628767.0;
    float area2 = 693780400.0;

    float pib1 = 8.68;
    float pib2 = 1.64;

    int pontos1 = 10;
    int pontos2 = 5;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("### COMPARADOR DE CARTAS ###\n\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n--------------------------------\n");

    switch (opcao) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Comparando PIB em trilhões de dólares:\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);
            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Comparando Densidade Demográfica (habitantes/km²):\n");
            printf("%s: %.4f\n", pais1, densidade1);
            printf("%s: %.4f\n", pais2, densidade2);
            // Regra invertida: vence o menor valor
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }

    printf("--------------------------------\n");


    printf("Fim da comparação.\n");

}
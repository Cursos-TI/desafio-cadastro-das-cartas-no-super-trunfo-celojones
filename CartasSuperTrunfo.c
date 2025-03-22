#include <stdio.h>

int main() {
    char estado1 = 'B';
    char codigo1[] = "B01";
    char nomeCidade1[] = "Salvador";
    int populacao1 = 2886698;
    float area1 = 693.83;
    float pib1 = 63.63;
    int pontosTuristicos1 = 35;

    char estado2 = 'E';
    char codigo2[] = "E01";
    char nomeCidade2[] = "Vitoria";
    int populacao2 = 365855;
    float area2 = 93.38;
    float pib2 = 36.10;
    int pontosTuristicos2 = 20;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    printf ("Novo commit\n");
    return 0;
}

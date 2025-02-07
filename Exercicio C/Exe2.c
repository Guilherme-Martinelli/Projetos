#include <stdio.h>

int main() {
    float mes1, mes2, mes3, media;

    // Entrada dos índices pluviométricos
    printf("Índice pluviométrico do mês 1: ");
    scanf("%f", &mes1);
    printf("Índice pluviométrico do mês 2: ");
    scanf("%f", &mes2);
    printf("Índice pluviométrico do mês 3: ");
    scanf("%f", &mes3);

    media = (mes1 + mes2 + mes3) / 3;

    printf("Média dos índices: %.2f\n", media);

    return 0;
}

#include <stdio.h>

int main() {
    char tipo;
    float percurso, consumo;

    printf("Informe o tipo de carro (Celta, Gol, HB20): ");
    scanf(" %c", &tipo);
    printf("Informe o percurso rodado em km: ");
    scanf("%f", &percurso);

    if (tipo == 'C' || tipo == 'c') {
        consumo = percurso / 8.0;
    } else if (tipo == 'G' || tipo == 'g') {
        consumo = percurso / 9.0;
    } else if (tipo == 'H' || tipo == 'h') {
        consumo = percurso / 12.0;
    } else {
        printf("Tipo de carro inválido.\n");
        return 1;
    }

    printf("Consumo estimado: %.2f litros\n", consumo);

    return 0;
}

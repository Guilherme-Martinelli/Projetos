#include <stdio.h>

int main() {
    float tempoGasto; 
    float velocidadeMedia;  
    float distancia; 
    float consumo;  
    
    const float KM_POR_LITRO = 12.0;  
    
    printf("Digite o tempo gasto na viagem (horas): ");
    scanf("%f", &tempoGasto);

    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &velocidadeMedia);

    distancia = velocidadeMedia * tempoGasto;

    consumo = distancia / KM_POR_LITRO;

    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Consumo de gasolina: %.2f litros\n", consumo);

    return 0;
}

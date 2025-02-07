#include <stdio.h>

int main() {
    int horaInicio, horaFim; 
    int duracao; 


    printf("Digite a hora de início do jogo (0-23): ");
    scanf("%d", &horaInicio);

    printf("Digite a hora de fim do jogo (0-23): ");
    scanf("%d", &horaFim);


    if (horaInicio < 0 || horaInicio > 23 || horaFim < 0 || horaFim > 23) {
        printf("Horas inválidas. As horas devem estar no intervalo de 0 a 23.\n");
        return 1;  // Código de erro
    }

    if (horaFim >= horaInicio) {
        duracao = horaFim - horaInicio;
    } else {
        duracao = (24 - horaInicio) + horaFim;
    }

    printf("A duração do jogo é de %d horas.\n", duracao);

    return 0;
}

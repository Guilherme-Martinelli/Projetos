#include <stdio.h>

int main() {
    int idade;
    int sexo;     
    float altura;      
    int segundoGrau;   

    printf("Digite a idade do(a) candidato(a): ");
    scanf("%d", &idade);

    printf("Digite o sexo do(a) candidato(a) (1 para mulher, 0 para homem): ");
    scanf("%d", &sexo);

    printf("Digite a altura do(a) candidato(a) (em metros): ");
    scanf("%f", &altura);

    printf("O(a) candidato(a) possui segundo grau completo? (1 para Sim, 0 para não): ");
    scanf("%d", &segundoGrau);

    // Verifica se o(a) candidato(a) atende aos pré-requisitos
    int idadeValida = (idade >= 18 && idade <= 29);
    int alturaValida = (sexo == 1) ? (altura >= 1.58) : (altura >= 1.65);
    int segundoGrauValido = (segundoGrau == 1);

    if (idadeValida && alturaValida && segundoGrauValido) {
        printf("O(a) candidato(a) atende aos pré-requisitos.\n");
    } else {
        printf("O(a) candidato(a) NÃO atende aos pré-requisitos.\n");
    }

    return 0;
}

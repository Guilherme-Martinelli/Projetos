#include <stdio.h>

int main() {
    char nomeCliente[100];  // Nome do Sujeito
    int numeroDiarias;  // Número de diárias
    float valorDiaria = 60.00;
    float taxaServico;  // Taxa de serviços por diária
    float totalConta;  // Total da conta

    printf("Digite o nome do cliente: ");
    fgets(nomeCliente, sizeof(nomeCliente), stdin);

    printf("Digite o número de diárias: ");
    scanf("%d", &numeroDiarias);

    if (numeroDiarias > 15) {
        taxaServico = 5.50;
    } else if (numeroDiarias == 15) {
        taxaServico = 6.00;
    } else {
        taxaServico = 8.00;
    }

    totalConta = (valorDiaria + taxaServico) * numeroDiarias;

    printf("Nome do Cliente: %s", nomeCliente);
    printf("Total da conta: R$ %.2f\n", totalConta);

    return 0;
}

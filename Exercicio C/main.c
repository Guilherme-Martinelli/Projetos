#include <stdio.h>

int main() {
    float preco_etanol, preco_gasolina, relacao;

    printf("Digite o preço por litro de etanol: ");
    scanf("%f", &preco_etanol);
    printf("Digite o preço por litro de gasolina: ");
    scanf("%f", &preco_gasolina);

    relacao = preco_etanol / preco_gasolina;

    if (relacao <= 0.7) {
        printf("É mais em conta abastecer com etanol.\n");
    } else {
        printf("É mais em conta abastecer com gasolina.\n");
    }

    return 0;
}

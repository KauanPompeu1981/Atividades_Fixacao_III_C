#include <stdio.h>

int main() {
    float valorCompra, percentualDesconto, valorDesconto, valorFinal;
    int formaPagamento;
    char formaTexto[10];

    printf("Sistema de Calculo de Desconto\n");
    printf("------------------------------\n\n");

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("\nFormas de Pagamento disponiveis:\n");
    printf("1 - PIX (20%% de desconto)\n");
    printf("2 - Debito (15%% de desconto)\n");
    printf("3 - Credito (5%% de desconto)\n\n");

    printf("Escolha a forma de pagamento: ");
    scanf("%d", &formaPagamento);

    switch (formaPagamento) {
        case 1:
            percentualDesconto = 20.0;
            sprintf(formaTexto, "PIX");
            break;
        case 2:
            percentualDesconto = 15.0;
            sprintf(formaTexto, "Debito");
            break;
        case 3:
            percentualDesconto = 5.0;
            sprintf(formaTexto, "Credito");
            break;
        default:
            printf("\nForma de pagamento invalida!\n");
            return 0;
    }

    valorDesconto = valorCompra * (percentualDesconto / 100);
    valorFinal = valorCompra - valorDesconto;

    printf("\n----- Resumo da Compra -----\n");
    printf("Sua forma de pagamento escolhida foi: %s\n", formaTexto);
    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor a pagar: R$ %.2f\n", valorFinal);

    return 0;
}
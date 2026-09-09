#include <stdio.h>

int main() {
    int codigo;
    float valor;
    char produto[30];

    printf("=====================================\n");
    printf("     Sistema de Pedidos Restaurante\n");
    printf("=====================================\n\n");

    printf("Cardapio Digital:\n");
    printf("-----------------------------------\n");
    printf("1 - Hamburguer Artesanal  - R$ 25,00\n");
    printf("2 - Pizza Calabresa       - R$ 45,00\n");
    printf("3 - Prato Executivo       - R$ 35,00\n");
    printf("4 - Refrigerante          - R$ 8,00\n");
    printf("5 - Sobremesa             - R$ 12,00\n");
    printf("6 - Encerrar Pedido\n\n");

    printf("Digite o codigo do produto desejado: ");
    scanf("%d", &codigo);

    printf("\n");

    switch (codigo) {
        case 1:
            sprintf(produto, "Hamburguer Artesanal");
            valor = 25.00;
            break;
        case 2:
            sprintf(produto, "Pizza Calabresa");
            valor = 45.00;
            break;
        case 3:
            sprintf(produto, "Prato Executivo");
            valor = 35.00;
            break;
        case 4:
            sprintf(produto, "Refrigerante");
            valor = 8.00;
            break;
        case 5:
            sprintf(produto, "Sobremesa");
            valor = 12.00;
            break;
        case 6:
            printf("Pedido encerrado. Obrigado pela preferencia!\n");
            return 0;
        default:
            printf("Opcao invalida. Produto nao encontrado no cardapio.\n");
            return 0;
    }

    printf("Produto escolhido: %s\n\n", produto);
    printf("Valor: R$ %.2f\n\n", valor);
    printf("Pedido confirmado! Aguarde o preparo.\n");

    return 0;
}
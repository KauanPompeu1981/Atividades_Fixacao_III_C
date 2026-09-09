#include <stdio.h>

int main() {
    int opcao;

    printf("=====================================\n");
    printf(" Sistema Inteligente de Atendimento\n");
    printf("=====================================\n\n");

    printf("Menu de Atendimento:\n");
    printf("1 - Suporte Tecnico\n");
    printf("2 - Financeiro\n");
    printf("3 - Recursos Humanos\n");
    printf("4 - Comercial\n");
    printf("5 - Encerrar Atendimento\n\n");

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("\n");

    switch (opcao) {
        case 1:
            printf("Setor selecionado: Suporte Tecnico\n\n");
            printf("Sua solicitacao sera direcionada para a equipe de tecnologia.\n");
            printf("Atendimento para sistemas, redes, computadores e equipamentos.\n");
            break;
        case 2:
            printf("Setor selecionado: Financeiro\n\n");
            printf("Sua solicitacao sera direcionada para a equipe financeira.\n");
            printf("Atendimento para duvidas sobre pagamentos, cobrancas, contratos e faturamento.\n");
            break;
        case 3:
            printf("Setor selecionado: Recursos Humanos\n\n");
            printf("Sua solicitacao sera direcionada para a equipe de RH.\n");
            printf("Atendimento para assuntos relacionados a colaboradores, beneficios e documentos internos.\n");
            break;
        case 4:
            printf("Setor selecionado: Comercial\n\n");
            printf("Sua solicitacao sera direcionada para a equipe comercial.\n");
            printf("Atendimento para propostas, vendas, clientes e negociacoes comerciais.\n");
            break;
        case 5:
            printf("Encerrando o atendimento...\n");
            printf("Agradecemos o seu contato!\n");
            break;
        default:
            printf("Opcao invalida. Escolha um setor disponivel.\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int codigo;

    printf("==========================================\n");
    printf("     Sistema de Gestao de Transporte\n");
    printf("==========================================\n\n");

    printf("Categorias de Veiculos:\n");
    printf("------------------------------------------\n");
    printf("1 - Carro\n");
    printf("2 - Motocicleta\n");
    printf("3 - Van\n");
    printf("4 - Onibus\n");
    printf("5 - Caminhao\n");
    printf("6 - Encerrar Sistema\n\n");

    printf("Digite o codigo do veiculo: ");
    scanf("%d", &codigo);

    printf("\n");

    switch (codigo) {
        case 1:
            printf("Veiculo selecionado: Carro\n");
            printf("Finalidade: Transporte de passageiros em pequena quantidade.\n");
            printf("Status: Veiculo classificado com sucesso.\n");
            break;
        case 2:
            printf("Veiculo selecionado: Motocicleta\n");
            printf("Finalidade: Entregas rapidas e transporte de pequenas cargas.\n");
            printf("Status: Veiculo classificado com sucesso.\n");
            break;
        case 3:
            printf("Veiculo selecionado: Van\n");
            printf("Finalidade: Transporte de passageiros ou pequenas cargas.\n");
            printf("Status: Veiculo classificado com sucesso.\n");
            break;
        case 4:
            printf("Veiculo selecionado: Onibus\n");
            printf("Finalidade: Transporte coletivo de passageiros.\n");
            printf("Status: Veiculo classificado com sucesso.\n");
            break;
        case 5:
            printf("Veiculo selecionado: Caminhao\n");
            printf("Finalidade: Transporte de cargas.\n");
            printf("Status: Veiculo classificado com sucesso.\n");
            break;
        case 6:
            printf("Encerrando o sistema...\n");
            break;
        default:
            printf("Opcao invalida. Veiculo nao encontrado.\n");
    }

    return 0;
}
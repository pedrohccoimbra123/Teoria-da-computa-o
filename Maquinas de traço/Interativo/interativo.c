#include <stdio.h>

int main() {
    int opcao;
    do {
        printf("Selecione uma opcao:\n");
        printf("1. Calcular fatorial\n");
        printf("2. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int num, fatorial = 1;
                int i;

                printf("Digite um numero para calcular o fatorial:\n");
                scanf("%d", &num);

                if (num < 0) {
                    printf("Erro: Fatorial de numero negativo nao definido.\n");
                } else {
                    for (i = 1; i <= num; ++i) {
                        fatorial *= i;
                    }
                    printf("O fatorial de %d e: %d\n", num, fatorial);
                }
                break;
            }
            case 2:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}

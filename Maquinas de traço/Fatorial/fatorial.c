#include <stdio.h>

// Função recursiva para calcular o fatorial
int calcularFatorial(int n) {
    // Caso base: fatorial de 0 é 1
    if (n == 0) {
        return 1;
    } else {
        // Chamada recursiva para calcular o fatorial de n-1
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int num;

    // Solicita o número ao usuário
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &num);

    // Verifica se o número é negativo
    if (num < 0) {
        printf("Erro: Fatorial de numero negativo nao definido.\n");
    } else {
        // Calcula e exibe o fatorial
        printf("O fatorial de %d e: %d\n", num, calcularFatorial(num));
    }

    return 0;
}

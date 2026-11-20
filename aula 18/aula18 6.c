#include <stdio.h>

int calcularFatorial(int n) {
    int resultado = 1;

    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("\nNumero invalido! Digite um valor entre 0 e 12.\n");
    } else {
        printf("\nFatorial de %d = %d\n", numero, calcularFatorial(numero));
    }

    return 0;
}
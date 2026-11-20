#include <stdio.h>

float maiorPreco(float a, float b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    float preco1, preco2;

    printf("===== COMPARADOR DE PRECOS =====\n\n");

    printf("Preco 1: ");
    scanf("%f", &preco1);
    printf("Preco 2: ");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("\nOs precos sao iguais: R$ %.2f\n", preco1);
    } else {
        printf("\nMaior preco: R$ %.2f\n", maiorPreco(preco1, preco2));
    }

    return 0;
}
#include <stdio.h>

void exibirMenu() {
    printf("\n===== CALCULADORA =====\n\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
}

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    int opcao;
    float n1, n2;

    do {
        exibirMenu();

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\nEncerrando a calculadora.\n");
            break;
        }

        if (opcao < 0 || opcao > 4) {
            printf("\nOpcao invalida!\n");
            continue;
        }

        printf("\nPrimeiro numero: ");
        scanf("%f", &n1);
        printf("Segundo numero: ");
        scanf("%f", &n2);

        switch (opcao) {
            case 1:
                printf("\nResultado: %.2f\n", somar(n1, n2));
                break;
            case 2:
                printf("\nResultado: %.2f\n", subtrair(n1, n2));
                break;
            case 3:
                printf("\nResultado: %.2f\n", multiplicar(n1, n2));
                break;
            case 4:
                if (n2 == 0) {
                    printf("\nErro: divisao por zero nao e permitida!\n");
                } else {
                    printf("\nResultado: %.2f\n", dividir(n1, n2));
                }
                break;
        }

    } while (opcao != 0);

    return 0;
}
#include <stdio.h>

int main() {
    FILE *arquivo;
    int numeros[5];
    int valor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(arquivo, "%d\n", numeros[i]);
    }

    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo!\n");
        return 1;
    }

    printf("\nNumeros armazenados no arquivo:\n");
    while (fscanf(arquivo, "%d", &valor) == 1) {
        printf("%d\n", valor);
    }

    fclose(arquivo);

    return 0;
}
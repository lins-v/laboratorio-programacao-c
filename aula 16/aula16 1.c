#include <stdio.h>

int main() {
    char palavra[100];
    int total = 0;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        total++;
    }

    printf("Quantidade de letras digitadas: %d\n", total);

    return 0;
}
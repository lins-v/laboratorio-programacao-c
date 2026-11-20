#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char categoria[20];
    char copia[50];
    char descricao[100];
    char tipoCategoria[20];

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Nome do produto: ");
    scanf("%49s", nome);

    printf("Categoria: ");
    scanf("%19s", categoria);

    int tamanho = strlen(nome);

    if (strcmp(categoria, "HARDWARE") == 0) {
        strcpy(tipoCategoria, "Hardware");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        strcpy(tipoCategoria, "Periferico");
    } else {
        strcpy(tipoCategoria, "Categoria invalida");
    }

    strcpy(copia, nome);

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", nome);
    printf("Caracteres: %d\n", tamanho);
    printf("Categoria: %s\n", tipoCategoria);

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char nome[50];
    char matricula[20];
    int quantidade;

    printf("Quantos funcionarios deseja cadastrar (ate 5)? ");
    scanf("%d", &quantidade);
    getchar();

    if (quantidade < 1 || quantidade > 5) {
        printf("Quantidade invalida! Digite um valor entre 1 e 5.\n");
        return 1;
    }

    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\nFuncionario %d\n", i + 1);

        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Matricula: ");
        fgets(matricula, sizeof(matricula), stdin);
        matricula[strcspn(matricula, "\n")] = '\0';

        fprintf(arquivo, "%s;%s\n", nome, matricula);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso!\n");

    return 0;
}
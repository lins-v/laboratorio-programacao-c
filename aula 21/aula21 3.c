#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario f;
    int quantidade;

    printf("Quantos funcionarios deseja cadastrar agora (ate 5)? ");
    scanf("%d", &quantidade);
    getchar();

    if (quantidade < 1 || quantidade > 5) {
        printf("Quantidade invalida! Digite um valor entre 1 e 5.\n");
        return 1;
    }

    arquivo = fopen("funcionarios.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\nFuncionario %d\n", i + 1);

        printf("Nome: ");
        fgets(f.nome, sizeof(f.nome), stdin);
        f.nome[strcspn(f.nome, "\n")] = '\0';

        printf("Salario: ");
        scanf("%f", &f.salario);

        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);
        getchar();

        fprintf(arquivo, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);

    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo!\n");
        return 1;
    }

    printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");
    while (fscanf(arquivo, " %49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3) {
        printf("\nNome: %s\n", f.nome);
        printf("Salario: R$ %.2f\n", f.salario);
        printf("Horas extras: %d\n", f.horasExtras);
    }

    fclose(arquivo);

    return 0;
}
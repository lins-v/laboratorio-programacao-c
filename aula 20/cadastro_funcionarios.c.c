#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario1, funcionario2;

    printf("===== CADASTRO DE FUNCIONARIOS =====\n");

    printf("\nFuncionario 1\n");
    printf("Nome: ");
    fgets(funcionario1.nome, sizeof(funcionario1.nome), stdin);
    funcionario1.nome[strcspn(funcionario1.nome, "\n")] = '\0';
    printf("Idade: ");
    scanf("%d", &funcionario1.idade);
    printf("Salario: ");
    scanf("%f", &funcionario1.salario);
    getchar();

    printf("\nFuncionario 2\n");
    printf("Nome: ");
    fgets(funcionario2.nome, sizeof(funcionario2.nome), stdin);
    funcionario2.nome[strcspn(funcionario2.nome, "\n")] = '\0';
    printf("Idade: ");
    scanf("%d", &funcionario2.idade);
    printf("Salario: ");
    scanf("%f", &funcionario2.salario);

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("\nFuncionario 1\n");
    printf("Nome: %s\n", funcionario1.nome);
    printf("Idade: %d\n", funcionario1.idade);
    printf("Salario: R$ %.2f\n", funcionario1.salario);

    printf("\nFuncionario 2\n");
    printf("Nome: %s\n", funcionario2.nome);
    printf("Idade: %d\n", funcionario2.idade);
    printf("Salario: R$ %.2f\n", funcionario2.salario);

    printf("\n===== RESULTADO =====\n");
    if (funcionario1.salario == funcionario2.salario) {
        printf("Os dois funcionarios recebem o mesmo salario.\n");
    } else if (funcionario1.salario > funcionario2.salario) {
        printf("Maior salario: %s\n", funcionario1.nome);
        printf("Diferenca salarial: R$ %.2f\n", funcionario1.salario - funcionario2.salario);
    } else {
        printf("Maior salario: %s\n", funcionario2.nome);
        printf("Diferenca salarial: R$ %.2f\n", funcionario2.salario - funcionario1.salario);
    }

    return 0;
}
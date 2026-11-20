#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100];
    char tipoPerfil[20];

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil: ");
    scanf("%19s", perfil);

    int tamanho = strlen(nome);

    if (strcmp(perfil, "ADMIN") == 0) {
        strcpy(tipoPerfil, "Administrador");
    } else if (strcmp(perfil, "COMUM") == 0) {
        strcpy(tipoPerfil, "Comum");
    } else {
        strcpy(tipoPerfil, "Perfil invalido");
    }

    strcpy(confirmacao, nome);

    strcpy(mensagem, "Bem-vindo(a), ");
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", tamanho);
    printf("Perfil: %s\n", tipoPerfil);

    printf("\n%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}
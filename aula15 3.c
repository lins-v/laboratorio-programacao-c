/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



#include <stdio.h>

int main() {
    float notas[3][2];
    float media;

    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d\n", i + 1);

        for (int j = 0; j < 2; j++) {
            printf("Digite a nota da prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        media = (notas[i][0] + notas[i][1]) / 2;

        printf("Media do aluno %d: %.2f\n", i + 1, media);
    }

    return 0;
}

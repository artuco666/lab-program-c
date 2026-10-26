#include <stdio.h>

int main(void) {
    float notas[3][2];

    for (int i = 0; i < 3; i++) {
        printf("--- Aluno %d ---\n", i + 1);
        for (int j = 0; j < 2; j++) {
            printf("Digite a nota da Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n=== Medias dos Alunos ===\n");
    for (int i = 0; i < 3; i++) {
        float somaNotas = notas[i][0] + notas[i][1];
        printf("Aluno %d - Media: %.2f\n", i + 1, somaNotas / 2.0f);
    }

    return 0;
}

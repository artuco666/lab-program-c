#include <stdio.h>

int main(void) {
    int matriz[2][3];
    int soma = 0;

    printf("=== Leitura da Matriz 2x3 ===\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nSoma total dos elementos: %d\n", soma);

    return 0;
}

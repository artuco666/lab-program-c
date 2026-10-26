#include <stdio.h>

int main(void) {
    int matriz[3][3];
    int soma = 0;

    printf("=== Matriz 3x3 ===\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nA soma de todos os elementos da matriz eh: %d\n", soma);

    return 0;
}

#include <stdio.h>

int main(void) {
    int matriz[3][3];
    int maior;

    printf("=== Leitura Matriz 3x3 ===\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0) {
                maior = matriz[i][j];
            } else if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("\nO maior valor armazenado eh: %d\n", maior);

    return 0;
}

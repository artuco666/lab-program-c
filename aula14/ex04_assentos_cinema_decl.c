#include <stdio.h>

int main(void) {
    // Declaração da matriz para 5 fileiras e 8 assentos por fileira (5x8)
    int assentos[5][8] = {0}; // 0 = disponível, 1 = ocupado

    // Acessando o 3º assento (índice 2) da 2ª fileira (índice 1)
    printf("Situacao do 3o assento da 2a fileira: %d (0 = Livre, 1 = Ocupado)\n", assentos[1][2]);

    return 0;
}

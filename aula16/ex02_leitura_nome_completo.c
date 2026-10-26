#include <stdio.h>

int main(void) {
    char nomeCompleto[100];

    printf("Digite seu nome completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

    printf("Nome informado: %s", nomeCompleto);

    return 0;
}

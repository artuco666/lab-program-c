#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfilInput[20];
    char nomeConfirmacao[50];
    char mensagem[100] = "Bem-vindo(a), ";
    char perfilExtenso[30];

    printf("===== CADASTRO DE USUARIOS =====\n\n");
    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfilInput);

    strcpy(nomeConfirmacao, nome);

    if (strcmp(perfilInput, "ADMIN") == 0) {
        strcpy(perfilExtenso, "Administrador");
    } else {
        strcpy(perfilExtenso, "Comum");
    }

    strcat(mensagem, nomeConfirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nomeConfirmacao);
    printf("Quantidade de caracteres: %zu\n", strlen(nomeConfirmacao));
    printf("Perfil: %s\n\n", perfilExtenso);
    printf("%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}

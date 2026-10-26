#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50];
    char categoriaInput[20];
    char copiaProduto[50];
    char descricao[100] = "Produto: ";
    char categoriaFormatada[30];

    printf("===== CADASTRO DE PRODUTOS =====\n\n");
    printf("Nome do produto: ");
    scanf("%49s", produto);

    printf("Categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoriaInput);

    strcpy(copiaProduto, produto);

    if (strcmp(categoriaInput, "HARDWARE") == 0) {
        strcpy(categoriaFormatada, "Hardware");
    } else if (strcmp(categoriaInput, "PERIFERICO") == 0) {
        strcpy(categoriaFormatada, "Periferico");
    } else {
        strcpy(categoriaFormatada, "Outro");
    }

    strcat(descricao, copiaProduto);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", copiaProduto);
    printf("Caracteres: %zu\n", strlen(copiaProduto));
    printf("Categoria: %s\n\n", categoriaFormatada);
    printf("Descricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}

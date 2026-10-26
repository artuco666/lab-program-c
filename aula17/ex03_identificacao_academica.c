#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char codigoCurso[10];
    char copiaNome[50];
    char cursoNome[40];
    char mensagem[100] = "Ola, ";

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");
    printf("Nome do estudante: ");
    scanf("%49s", nome);

    printf("Codigo do curso (CC ou SI): ");
    scanf("%9s", codigoCurso);

    if (strcmp(codigoCurso, "CC") == 0) {
        strcpy(cursoNome, "Ciencia da Computacao");
    } else if (strcmp(codigoCurso, "SI") == 0) {
        strcpy(cursoNome, "Sistemas de Informacao");
    } else {
        strcpy(cursoNome, "Curso nao identificado");
    }

    strcpy(copiaNome, nome);

    strcat(mensagem, copiaNome);
    strcat(mensagem, "!");

    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", copiaNome);
    printf("Curso: %s\n", cursoNome);
    printf("Caracteres no nome: %zu\n\n", strlen(copiaNome));
    printf("%s\n", mensagem);

    return 0;
}

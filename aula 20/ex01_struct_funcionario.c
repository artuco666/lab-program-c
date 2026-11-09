#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main(void) {
    //Funcionário 1
    Funcionario func1;

    printf("Nome: ");
    scanf(" %49[^\n]", func1.nome);

    printf("Idade: ");
    scanf("%d", &func1.idade);

    printf("Salário: ");
    scanf("%f", &func1.salario);

    //Funcionário 2
    Funcionario func2;

    printf("Nome: ");
    scanf(" %49[^\n]", func2.nome);

    printf("Idade: ");
    scanf("%d", &func2.idade);

    printf("Salário: ");
    scanf("%f", &func2.salario);

    //Dados do 1° funcionário
    printf("\nFuncionário: %s\n", func1.nome);
    printf("Idade: %d\n", func1.idade);
    printf("Salário: %.2f\n\n", func1.salario);

    //Dados do 2° funcionário
    printf("\nFuncionário: %s\n", func2.nome);
    printf("Idade: %d\n", func2.idade);
    printf("Salário: %.2f\n", func2.salario);

    //Cálculo do salário
    float diffsalario = fabsf(func1.salario - func2.salario);

    printf("\n");
    if (func1.salario == func2.salario) {
        printf("O salário de ambos os funcionários é igual.\n");
    } else if (func1.salario > func2.salario) {
        printf("O salário do 1° funcionário é maior: R$%.2f\n", func1.salario);
        printf("Diferença entre os salários: R$%.2f\n", diffsalario);
    } else {
        printf("O salário do 2° funcionário é maior: R$%.2f\n", func2.salario);
        printf("Diferença entre os salários: R$%.2f\n", diffsalario);
    }

    return 0;
}

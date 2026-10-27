#include <stdio.h>

void exibirMenu(){
    printf("====Operações====\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    
} void soma(){
    int n1, n2, som;
    printf("1° número: ");
    scanf("%d", &n1);

    printf("2° número: ");
    scanf("%d", &n2);

    som = n1 + n2;
    printf("Seu resultado é: %d", som);
    
} void subt(){
    int n1, n2, sub;
    printf("1° número: ");
    scanf("%d", &n1);

    printf("2° número: ");
    scanf("%d", &n2);

    sub = n1 - n2;
    printf("Seu resultado é: %d", sub);

} void mult(){
    int n1, n2, mul;
    printf("1° número: ");
    scanf("%d", &n1);

    printf("2° número: ");
    scanf("%d", &n2);

    mul = n1 * n2;
    printf("Seu resultado é: %d", mul);
    
} void divi(){
    int n1, n2;
    printf("1° número: ");
    scanf("%d", &n1);

    printf("2° número: ");
    scanf("%d", &n2);

    if (n2 == 0){
        printf("Não pode dividir por 0\n");
    }
    else{
        float div = (float)n1 / n2;
        printf("Seu resultado é: %.2f\n", div);    
    }
}

int main() {
    int opcao;
    do{
        exibirMenu();
    
        printf("Escolha a operação: ");
        scanf("%d", &opcao);
    
        switch (opcao){
            case 1: soma(); break;
            case 2: subt(); break;
            case 3: mult(); break;
            case 4: divi(); break;
            default: printf("Escolha de 1 a 4"); break;
        }
    } while (opcao < 5);
    
    return 0;
}

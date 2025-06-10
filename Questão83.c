#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    
    printf("Calculadora\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtraao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");

    
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    
    if (opcao == 5) {
        printf("Saindo da calculadora...\n");
        return 0;
    }

    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    
    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da adicao: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divisao: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Opcao invalida! Por favor, escolha uma opcao valida.\n");
            break;
    }

    return 0;
}

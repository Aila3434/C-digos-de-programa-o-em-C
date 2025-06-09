#include <stdio.h>

int main() {
    int opcao, num1, num2, num3;

    
    printf("Digite a opcao (2, 3 ou 4): ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero (Num1): ");
    scanf("%d", &num1);

    printf("Digite o segundo numero (Num2): ");
    scanf("%d", &num2);

    printf("Digite o terceiro número (Num3): ");
    scanf("%d", &num3);

    
    if (opcao == 2) {
        printf("Valor de Num1: %d\n", num1);
    } else if (opcao == 3) {
        printf("Valor de Num2: %d\n", num2);
    } else if (opcao == 4) {
        printf("Valor de Num3: %d\n", num3);
    } else {
        printf("Opcao invalida! Por favor, escolha 2, 3 ou 4.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int A, B, soma, resultado;

    
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    
    soma = A + B;
    resultado = soma * soma;

    
    printf("O quadrado da soma dos valores lidos: %d\n", resultado);

    return 0;
}

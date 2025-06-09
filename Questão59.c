#include <stdio.h>

int main() {
    int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if (numero % 2 == 0) {
        printf("O numero %d e PAR.\n", numero);
    } else {
        printf("O numero %d e IMPAR.\n", numero);
    }

    
    if (numero > 0) {
        printf("O numero %d e POSITIVO.\n", numero);
    } else if (numero < 0) {
        printf("O numero %d e NEGATIVO.\n", numero);
    } else {
        printf("O numero e ZERO.\n");
    }

    return 0;
}

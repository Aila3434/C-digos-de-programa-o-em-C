#include <stdio.h>

int verificarPar(int numero) {
    if (numero % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (verificarPar(numero)) {
        printf("%d e um numero par.\n", numero);
    } else {
        printf("%d e um numero impar.\n", numero);
    }

    return 0;
}

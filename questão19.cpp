#include <stdio.h>

int main() {
    int valor, quadrado, cubo;

    
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    
    quadrado = valor * valor;
    cubo = valor * valor * valor;

    
    printf("Quadrado do valor: %d\n", quadrado);
    printf("Cubo do valor: %d\n", cubo);

    return 0;
}

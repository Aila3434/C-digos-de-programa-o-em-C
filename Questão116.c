#include <stdio.h>

int main() {
    float numero;
    int contador = 0;

    
    printf("Digite um número: ");
    scanf("%f", &numero);

    
    while (numero >= 1) {
        numero /= 2; 
        contador++;  
    }

    
    printf("Resultado da última divisão: %.6f\n", numero);
    printf("Quantidade de divisões efetuadas: %d\n", contador);

    return 0;
}

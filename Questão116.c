#include <stdio.h>

int main() {
    float numero;
    int contador = 0;

    
    printf("Digite um n�mero: ");
    scanf("%f", &numero);

    
    while (numero >= 1) {
        numero /= 2; 
        contador++;  
    }

    
    printf("Resultado da �ltima divis�o: %.6f\n", numero);
    printf("Quantidade de divis�es efetuadas: %d\n", contador);

    return 0;
}

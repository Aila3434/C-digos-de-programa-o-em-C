#include <stdio.h>

int main() {
    int x = 1; 
    int soma = 0; // Inicializa a soma

    
    while (x <= 10) {
        soma += x; 
        x++; 
    }

    
    printf("A soma dos inteiros de 1 a 10 é: %d\n", soma);

    return 0;
}

#include <stdio.h>

int main() {
    int numero;
    int qPares = 0; 
    int qImpares = 0; 

    printf("Digite os números (digite 9999 para encerrar):\n");

    while (1) {
        scanf("%d", &numero);
        
        
        if (numero == 9999) {
            break; 
        }

        
        if (numero % 2 == 0) {
            qPares++; 
        } else {
            qImpares++; 
        }
    }

    
    printf("Pares=%d Impares=%d\n", qPares, qImpares);

    return 0;
}

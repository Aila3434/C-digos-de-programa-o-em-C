#include <stdio.h>

int main() {
    int numero;
    int maximo = -1; 

    printf("Digite os números (digite 9999 para encerrar):\n");

    while (1) {
        scanf("%d", &numero);
        
        
        if (numero == 9999) {
            break; 
        }

        
        if (numero > maximo) {
            maximo = numero;
        }
    }

    
    if (maximo != -1) {
        printf("Maior = %d\n", maximo);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int contador = 0;

    printf("Digite os números (digite 9999 para encerrar):\n");

    while (1) {
        scanf("%d", &numero);
        
        
        if (numero == 9999) {
            break; 
        }

        soma += numero; 
        contador++;     
    }

    
    if (contador > 0) {
        float media = (float)soma / contador; 
        printf("Soma = %d, Média = %.2f\n", soma, media);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    return 0;
}

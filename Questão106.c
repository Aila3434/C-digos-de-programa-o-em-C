#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int contador = 0;

    printf("Digite os n�meros (digite 9999 para encerrar):\n");

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
        printf("Soma = %d, M�dia = %.2f\n", soma, media);
    } else {
        printf("Nenhum n�mero foi digitado.\n");
    }

    return 0;
}

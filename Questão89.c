#include <stdio.h>

int main() {
    int valores[50];
    int soma_positivos = 0;
    int cont_negativos = 0;
    int i; 

    
    printf("Digite 50 valores inteiros:\n");
    for (i = 0; i < 50; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        
        if (valores[i] > 0) {
            soma_positivos += valores[i]; 
        } else if (valores[i] < 0) {
            cont_negativos++; 
        }
    }


    printf("A soma dos números positivos é: %d\n", soma_positivos);
    printf("A quantidade de valores negativos é: %d\n", cont_negativos);

    return 0;
}

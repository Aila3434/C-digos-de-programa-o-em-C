#include <stdio.h>

int main() {
    int soma = 0;
    int i; 

    
    for (i = 1; i <= 100; i++) {
        soma += i;
    }

    
    printf("A soma dos n�meros de 1 a 100 �: %d\n", soma);

    return 0;
}

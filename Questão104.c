#include <stdio.h>

int multiplicar(int a, int b) {
    int resultado = 0;

    
    int sinal = 1;
    if (b < 0) {
        sinal = -1;
        b = -b; 
    }

    
    int i;
    
    for (i = 0; i < b; i++) {
        resultado += a;
    }

    
    return resultado * sinal;
}

int main() {
    int num1, num2;

    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);


    int resultado = multiplicar(num1, num2);
    printf("Resultado: %d\n", resultado);

    return 0;
}

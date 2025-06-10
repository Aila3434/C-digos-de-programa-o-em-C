#include <stdio.h>

int main() {
    int N;
    float A = 0.0;
    int i; 

    
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    
    if (N <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1; 
    }

    
    for (i = 1; i <= N; i++) { 
        if (i % 2 == 0) {
            A -= (float)N / i; 
        } else {
            A += (float)N / i; 
        }
    }

    
    printf("O valor de A é: %.2f\n", A);

    return 0;
}

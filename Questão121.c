#include <stdio.h>
#include <math.h>

int main() {
    int N;
    
    
    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    
    int raiz = (int)sqrt(N);
    
    
    int maiorQuadrado = raiz * raiz;


    printf("O maior quadrado menor ou igual a %d é %d.\n", N, maiorQuadrado);

    return 0;
}

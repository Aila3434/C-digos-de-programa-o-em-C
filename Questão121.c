#include <stdio.h>
#include <math.h>

int main() {
    int N;
    
    
    printf("Digite um n�mero inteiro N: ");
    scanf("%d", &N);

    
    int raiz = (int)sqrt(N);
    
    
    int maiorQuadrado = raiz * raiz;


    printf("O maior quadrado menor ou igual a %d � %d.\n", N, maiorQuadrado);

    return 0;
}

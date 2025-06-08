#include <stdio.h>

int main() {
    int N, M;
    int C, D, U;
    
    printf("Digite um numero de tres algarismos: ");
    scanf("%d", &N);
    
    
    if (N < 100 || N > 999) {
        printf("Erro: o numero deve ter exatamente tres algarismos.\n");
        return 1;
    }
    

    C = N / 100;         
    D = (N % 100) / 10;  
    U = N % 10;          
    
    
    M = U * 100 + D * 10 + C;
    
    printf("N = %d -> M = %d\n", N, M);
    
    return 0;
}

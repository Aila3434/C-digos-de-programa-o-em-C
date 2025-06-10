#include <stdio.h>

int main() {
    int mat[4][4]; 
    int soma = 0; 
    int i, j; 

    
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    
    for (i = 1; i < 4; i++) {
        for (j = 0; j < i; j++) { 
            soma += mat[i][j]; 
        }
    }

    
    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);

    return 0;
}

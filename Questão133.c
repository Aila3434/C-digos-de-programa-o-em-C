#include <stdio.h>

int main() {
    int mat[2][3]; // Declaração da matriz 2x3
    int soma = 0; // Variável para armazenar a soma dos elementos
    int i, j; // Variáveis de controle para os loops

    // Lê os elementos da matriz
    printf("Digite os elementos da matriz 2x3:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            soma += mat[i][j]; // Adiciona o elemento à soma
        }
    }

    // Imprime a soma dos elementos
    printf("A soma de todos os elementos da matriz é: %d\n", soma);

    return 0;
}

#include <stdio.h>

int main() {
    int M[5][5]; 
    int i, j;
    int soma_linha4 = 0, soma_coluna2 = 0, soma_diagonal_principal = 0;
    int soma_diagonal_secundaria = 0, soma_total = 0;

    
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            
            soma_total += M[i][j];

            
            if (i == 3) {
                soma_linha4 += M[i][j];
            }

            
            if (j == 1) {
                soma_coluna2 += M[i][j];
            }

            
            if (i == j) {
                soma_diagonal_principal += M[i][j];
            }

            
            if (i + j == 4) {
                soma_diagonal_secundaria += M[i][j];
            }
        }
    }

    
    printf("\nA matriz M é:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da linha 4: %d\n", soma_linha4);
    printf("Soma da coluna 2: %d\n", soma_coluna2);
    printf("Soma da diagonal principal: %d\n", soma_diagonal_principal);
    printf("Soma da diagonal secundária: %d\n", soma_diagonal_secundaria);
    printf("Soma total de todos os elementos: %d\n", soma_total);

    return 0;
}

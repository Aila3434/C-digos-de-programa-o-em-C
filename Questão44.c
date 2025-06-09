#include <stdio.h>

int main() {
    
    int quantidade[3]; 
    float preco[3] = {0.50, 0.60, 0.75}; 
    float total_arrecadado[3]; 
    float total_geral = 0.0; 
    int i; 

    
    for (i = 0; i < 3; i++) {
        printf("Digite a quantidade vendida do picole tipo %d: ", i + 1);
        scanf("%d", &quantidade[i]);

        
        total_arrecadado[i] = quantidade[i] * preco[i];
        
        
        total_geral += total_arrecadado[i];
    }

    
    printf("\nResumo da venda de picoles:\n");
    for (i = 0; i < 3; i++) {
        printf("Picole tipo %d:\n", i + 1);
        printf("Quantidade vendida: %d\n", quantidade[i]);
        printf("Total arrecadado: R$ %.2f\n\n", total_arrecadado[i]);
    }
    
    printf("Total geral arrecadado: R$ %.2f\n", total_geral);

    return 0;
}

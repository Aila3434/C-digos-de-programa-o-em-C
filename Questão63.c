#include <stdio.h>

int main() {
    int codigo;
    int quantidade;
    float preco_unitario = 0.0;
    float preco_total;

    
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    
    switch (codigo) {
        case 1001:
            preco_unitario = 5.32;
            break;
        case 1324:
            preco_unitario = 6.45;
            break;
        case 6548:
            preco_unitario = 2.37;
            break;
        case 987:
            preco_unitario = 5.32; 
            break;
        case 7623:
            preco_unitario = 6.40;
            break;
        default:
            printf("Codigo de produto invalido.\n");
            return 1;
    }

    
    preco_total = preco_unitario * quantidade;

    
    printf("Preco total a pagar: R$ %.2f\n", preco_total);

    return 0;
}

#include <stdio.h>

int main() {
    int codigo;
    int quantidade;
    float preco;

    
    printf("Cardapio:\n");
    printf("100 - Cachorro quente - R$ 1,10\n");
    printf("101 - Bauru simples - R$ 1,30\n");
    printf("102 - Bauru c/ovo - R$ 1,50\n");
    printf("103 - Hamburger - R$ 1,10\n");
    printf("104 - Cheeseburger - R$ 1,30\n");
    printf("105 - Refrigerante - R$ 1,00\n");

    
    printf("Digite o codigo do item pedido: ");
    scanf("%d", &codigo);
    
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    
    switch (codigo) {
        case 100:
            preco = 1.10;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.10;
            break;
        case 104:
            preco = 1.30;
            break;
        case 105:
            preco = 1.00;
            break;
        default:
            printf("Codigo do item invalido.\n");
            return 1; 
    }

    
    float total = preco * quantidade;

    
    printf("Valor a ser pago: R$ %.2f\n", total);

    return 0;
}

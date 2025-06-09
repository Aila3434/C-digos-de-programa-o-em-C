#include <stdio.h>
#include <string.h>

int main() {
    char codigo[5]; 
    int quantidade;
    float preco_unitario = 0.0;
    float preco_total;

    
    printf("Digite o codigo do produto: ");
    scanf("%4s", codigo); 

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);


    if (strcmp(codigo, "ABCD") == 0) {
        preco_unitario = 5.30;
    } else if (strcmp(codigo, "XYPK") == 0) {
        preco_unitario = 6.00;
    } else if (strcmp(codigo, "KLMP") == 0) {
        preco_unitario = 3.20;
    } else if (strcmp(codigo, "QRST") == 0) {
        preco_unitario = 2.50;
    } else {
        printf("Codigo de produto invalido.\n");
        return 1; 
    }

    
    preco_total = preco_unitario * quantidade;

    
    printf("Preco total a pagar: R$ %.2f\n", preco_total);

    return 0;
}

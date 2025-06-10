#include <stdio.h>

int main() {
    float preco;
    int codigo;

    
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    
    printf("Digite o codigo de origem: ");
    scanf("%d", &codigo);

    
    if (codigo == 1) {
        printf("%.2f – Sul\n", preco);
    } else if (codigo == 2) {
        printf("%.2f – Norte\n", preco);
    } else if (codigo == 3) {
        printf("%.2f – Leste\n", preco);
    } else if (codigo == 4) {
        printf("%.2f – Oeste\n", preco);
    } else if (codigo == 5 || codigo == 6) {
        printf("%.2f – Nordeste\n", preco);
    } else if (codigo >= 7 && codigo <= 9) {
        printf("%.2f – Sudeste\n", preco);
    } else if (codigo >= 10 && codigo <= 20) {
        printf("%.2f – Centro Oeste\n", preco);
    } else if (codigo >= 25 && codigo <= 35) {
        printf("%.2f – Nordeste\n", preco);
    } else {
        printf("%.2f – Importado\n", preco);
    }

    return 0;
}

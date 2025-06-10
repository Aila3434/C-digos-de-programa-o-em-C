#include <stdio.h>

int main() {
    float salario, desconto, descontoMaximo = 318.20;


    printf ("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    
    desconto = salario * 0.11;

    
    if (desconto > descontoMaximo) {
        desconto = descontoMaximo;
    }

    
    printf("O valor do desconto previdenciario: %.2f\n", desconto);

    return 0;
}

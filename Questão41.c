#include <stdio.h>

int main() {
    
    float salario_minimo = 0.0;
    int num_carros_vendidos = 0;
    float valor_vendas = 0.0;
    float salario_fixo = 0.0;
    float comissao_fixa = 0.0;
    float comissao_variavel = 0.0;
    float salario_total = 0.0;


    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f", &salario_minimo);
    
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &num_carros_vendidos);
    
    printf("Digite o valor total das vendas: R$ ");
    scanf("%f", &valor_vendas);


    salario_fixo = 2 * salario_minimo; 
    comissao_fixa = 50 * num_carros_vendidos;
    comissao_variavel = 0.05 * valor_vendas;

    
    salario_total = salario_fixo + comissao_fixa + comissao_variavel;

    
    printf("O salário total do vendedor: R$ %.2f\n", salario_total);

    return 0;
}

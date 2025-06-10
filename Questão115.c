#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    float salario;
    float somaSalarios = 0.0;
    float salarioMaisAlto = 0.0;
    float salarioMaisBaixo = 0.0;
    int contador = 0;

    while (1) {
        printf("Digite o nome do funcionário (ou 'fim' para encerrar): ");
        scanf("%s", nome);

        if (strcmp(nome, "fim") == 0) {
            break; 
        }

        printf("Digite o salário de %s: ", nome);
        scanf("%f", &salario);

        
        somaSalarios += salario;
        contador++;

        
        if (contador == 1 || salario > salarioMaisAlto) {
            salarioMaisAlto = salario;
        }

        
        if (contador == 1 || salario < salarioMaisBaixo || contador == 1) {
            salarioMaisBaixo = salario;
        }
    }

    if (contador > 0) { 
        float mediaSalarios = somaSalarios / contador;
        printf("Média dos salários: %.2f\n", mediaSalarios);
        printf("Salário mais alto: %.2f\n", salarioMaisAlto);
        printf("Salário mais baixo: %.2f\n", salarioMaisBaixo);
    } else {
        printf("Nenhum salário foi informado.\n");
    }

    return 0;
}

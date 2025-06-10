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
        printf("Digite o nome do funcion�rio (ou 'fim' para encerrar): ");
        scanf("%s", nome);

        if (strcmp(nome, "fim") == 0) {
            break; 
        }

        printf("Digite o sal�rio de %s: ", nome);
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
        printf("M�dia dos sal�rios: %.2f\n", mediaSalarios);
        printf("Sal�rio mais alto: %.2f\n", salarioMaisAlto);
        printf("Sal�rio mais baixo: %.2f\n", salarioMaisBaixo);
    } else {
        printf("Nenhum sal�rio foi informado.\n");
    }

    return 0;
}

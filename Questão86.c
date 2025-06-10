#include <stdio.h>

int main() {
    int mes;

    
    printf("Digite um número entre 1 e 12 para representar um mês: ");
    scanf("%d", &mes);

    
    if (mes < 1 || mes > 12) {
        printf("Mês inválido! Por favor, digite um número entre 1 e 12.\n");
        return 1; 
    }

    
    char *estacao;

    
    switch (mes) {
        case 1: 
        case 2: 
        case 3: 
            estacao = "Verão";
            break;
        case 4: 
        case 5:
        case 6: 
            estacao = "Outono";
            break;
        case 7: 
        case 8: 
        case 9: 
            estacao = "Inverno";
            break;
        case 10: 
        case 11: 
        case 12: 
            estacao = "Primavera";
            break;
        default:
            estacao = "Desconhecida"; 
            break;
    }

    
    printf("A estação do ano correspondente ao mês %d é %s.\n", mes, estacao);

    return 0;
}

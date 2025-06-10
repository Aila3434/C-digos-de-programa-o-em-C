#include <stdio.h>

int main() {
    int mes;

    
    printf("Digite um n�mero entre 1 e 12 para representar um m�s: ");
    scanf("%d", &mes);

    
    if (mes < 1 || mes > 12) {
        printf("M�s inv�lido! Por favor, digite um n�mero entre 1 e 12.\n");
        return 1; 
    }

    
    char *estacao;

    
    switch (mes) {
        case 1: 
        case 2: 
        case 3: 
            estacao = "Ver�o";
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

    
    printf("A esta��o do ano correspondente ao m�s %d � %s.\n", mes, estacao);

    return 0;
}

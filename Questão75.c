#include <stdio.h>

int main() {
    float valorVenda, valorFinal;
    int opcao;

    
    printf("Digite o valor da venda: ");
    scanf("%f", &valorVenda);

    
    printf("Menu de Vendas:\n");
    printf("1 - Venda a Vista (desconto de 10%%)\n");
    printf("2 - Venda a Prazo 30 dias (desconto de 5%%)\n");
    printf("3 - Venda a Prazo 60 dias (sem desconto)\n");
    printf("4 - Venda a Prazo 90 dias (acrescimo de 5%%)\n");
    printf("5 - Venda com cartao de debito (desconto de 8%%)\n");
    printf("6 - Venda com cartao de credito (desconto de 7%%)\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    
    switch (opcao) {
        case 1:
            valorFinal = valorVenda * 0.90; 
            printf("Valor final da venda a vista: R$ %.2f\n", valorFinal);
            break;
        case 2:
            valorFinal = valorVenda * 0.95; 
            printf("Valor final da venda a prazo em 30 dias: R$ %.2f\n", valorFinal);
            break;
        case 3:
            valorFinal = valorVenda; 
            printf("Valor final da venda a prazo em 60 dias: R$ %.2f\n", valorFinal);
            break;
        case 4:
            valorFinal = valorVenda * 1.05; 
            printf("Valor final da venda a prazo em 90 dias: R$ %.2f\n", valorFinal);
            break;
        case 5:
            valorFinal = valorVenda * 0.92; 
            printf("Valor final da venda com cartao de debito: R$ %.2f\n", valorFinal);
            break;
        case 6:
            valorFinal = valorVenda * 0.93; 
            printf("Valor final da venda com cartao de credito: R$ %.2f\n", valorFinal);
            break;
        default:
            printf("Opcao invalida! Por favor, escolha uma opcao valida.\n");
            break;
    }

    return 0;
}

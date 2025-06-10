#include <stdio.h>
#include <string.h>

#define QUARTOS 30
#define VALOR_DIARIA 50.00

int main() {
    char nome[100];
    int diarias;
    double taxa_servicos;
    double total_conta;
    double total_ganho = 0.0;
    int i; 

    for (i = 0; i < QUARTOS; i++) {
        
        printf("Digite o nome do cliente (ou 'sair' para encerrar): ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0; 

        
        if (strcmp(nome, "sair") == 0) {
            break;
        }

        
        printf("Digite o número de diarias: ");
        scanf("%d", &diarias);
        getchar(); 

        
        if (diarias < 15) {
            taxa_servicos = 4.00;
        } else if (diarias == 15) {
            taxa_servicos = 3.60;
        } else {
            taxa_servicos = 3.00;
        }

        
        total_conta = (VALOR_DIARIA * diarias) + (taxa_servicos * diarias);
        
        
        printf("Nome: %s\n", nome);
        printf("Total da conta: R$ %.2f\n", total_conta);

        
        total_ganho += total_conta;
    }

    
    printf("Total ganho pelo hotel: R$ %.2f\n", total_ganho);

    return 0;
}

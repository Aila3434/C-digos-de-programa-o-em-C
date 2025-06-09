#include <stdio.h>

int main() {
    int numero_conta;
    float saldo, valor_operacao, novo_saldo;
    char operacao;

    
    printf("Digite o numero da conta: ");
    scanf("%d", &numero_conta);

    printf("Digite o saldo da conta: ");
    scanf("%f", &saldo);

    printf("Digite a operacao (d para deposito, r para retirada): ");
    scanf(" %c", &operacao); 

    printf("Digite o valor da operacao: ");
    scanf("%f", &valor_operacao);

    
    if (operacao == 'd' || operacao == 'D') {
        novo_saldo = saldo + valor_operacao; 
    } else if (operacao == 'r' || operacao == 'R') {
        novo_saldo = saldo - valor_operacao; 
    } else {
        printf("Operação invalida!\n");
        return 1; 
    }

    
    printf("Novo saldo: R$ %.2f\n", novo_saldo);

    
    if (novo_saldo < 0) {
        printf("Conta estourada!\n");
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    float numero;
    int opcao;

    
    printf("Digite um numero real: ");
    scanf("%f", &numero);

    
    printf("Escolha a opcao:\n");
    printf("101 - Raiz quadrada\n");
    printf("102 - A metade\n");
    printf("103 - 10%% do numero\n");
    printf("104 - O dobro\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    
    switch (opcao) {
        case 101:
            if (numero >= 0) {
                printf("A raiz quadrada de %.2f e %.2f\n", numero, sqrt(numero));
            } else {
                printf("Erro: Nao e possivel calcular a raiz quadrada de um numero negativo.\n");
            }
            break;
        case 102:
            printf("A metade de %.2f e %.2f\n", numero, numero / 2);
            break;
        case 103:
            printf("10%% de %.2f e %.2f\n", numero, numero * 0.10);
            break;
        case 104:
            printf("O dobro de %.2f e %.2f\n", numero, numero * 2);
            break;
        default:
            printf("Opção invalida! Por favor, escolha uma opcao valida.\n");
            break;
    }

    return 0;
}

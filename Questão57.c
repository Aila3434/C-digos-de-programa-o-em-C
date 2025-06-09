#include <stdio.h>

int main() {
    int a, b;


    printf("Digite o primeiro valor (a): ");
    scanf("%d", &a);

    printf("Digite o segundo valor (b): ");
    scanf("%d", &b);

    
    printf("Valores lidos: a = %d, b = %d\n", a, b);

    
    if (b != 0 && (a % b == 0 || b % a == 0)) {
        printf("Sao multiplos\n");
    } else {
        printf("Nao sao multiplos\n");
    }

    return 0;
}



#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    
    int maior, medio, menor;

    
    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
        if (num2 >= num3) {
            medio = num2;
            menor = num3;
        } else {
            medio = num3;
            menor = num2;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
        if (num1 >= num3) {
            medio = num1;
            menor = num3;
        } else {
            medio = num3;
            menor = num1;
        }
    } else {
        maior = num3;
        if (num1 >= num2) {
            medio = num1;
            menor = num2;
        } else {
            medio = num2;
            menor = num1;
        }
    }

    
    printf("Numeros em ordem decrescente: %d, %d, %d\n", maior, medio, menor);

    return 0;
}

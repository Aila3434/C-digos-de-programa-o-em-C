#include <stdio.h>

int main() {
    int num1, num2;
    int quoc = 0; 
    int resto = 0; 


    printf("Digite o primeiro n�mero (Num1): ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero (Num2): ");
    scanf("%d", &num2);

    
    if (num1 <= 0 || num2 <= 0) {
        printf("Por favor, digite n�meros inteiros positivos.\n");
        return 1; 
    }

    
    while (num1 >= num2) {
        num1 -= num2; 
        quoc++; 
    }
    
    resto = num1; 

    
    printf("Q=%d R=%d\n", quoc, resto);

    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite tres n�meros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 >= num2 && num1 >= num3) {
        
        if(num2 >= num3) {
            printf("Ordem decrescente: %d, %d, %d\n", num1, num2, num3);
        } else {
            printf("Ordem decrescente: %d, %d, %d\n", num1, num3, num2);
        }
    } else if(num2 >= num1 && num2 >= num3) {
        
        if(num1 >= num3) {
            printf("Ordem decrescente: %d, %d, %d\n", num2, num1, num3);
        } else {
            printf("Ordem decrescente: %d, %d, %d\n", num2, num3, num1);
        }
    } else {
        
        if(num1 >= num2) {
            printf("Ordem decrescente: %d, %d, %d\n", num3, num1, num2);
        } else {
            printf("Ordem decrescente: %d, %d, %d\n", num3, num2, num1);
        }
    }

    return 0;
}

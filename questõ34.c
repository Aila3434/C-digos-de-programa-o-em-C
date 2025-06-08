#include <stdio.h>

int main() {
    float a, b, c;

    
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    
    if (a <= b && a <= c) {
        
        if (b <= c) {
            printf("Ordem crescente: %.2f, %.2f, %.2f\n", a, b, c);
        } else {
            printf("Ordem crescente: %.2f, %.2f, %.2f\n", a, c, b);
        }
    } else if (b <= a && b <= c) {
        
        if (a <= c) {
            printf("Ordem crescente: %.2f, %.2f, %.2f\n", b, a, c);
        } else {
            printf("Ordem crescente: %.2f, %.2f, %.2f\n", b, c, a);
        }
    } else {
        
        if (a <= b) {
            printf("Ordem crescente: %.2f, %.2f, %.2f\n", c, a, b);
        } else {
            printf("Ordem crescente: %.2f, %.2f, %.2f\n", c, b, a);
        }
    }

    return 0;
}

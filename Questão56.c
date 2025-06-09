#include <stdio.h>

int main() {
    float a, b, c;

    
    printf("Digite o primeiro valor (a): ");
    scanf("%f", &a);

    printf("Digite o segundo valor (b): ");
    scanf("%f", &b);

    printf("Digite o terceiro valor (c): ");
    scanf("%f", &c);

    
    printf("Valores lidos: a = %.2f, b = %.2f, c = %.2f\n", a, b, c);

    
    if (a >= b && a >= c) {
        printf("%.2f e o maior\n", a);
    } else if (b >= a && b >= c) {
        printf("%.2f e o maior\n", b);
    } else {
        printf("%.2f e o maior\n", c);
    }

    return 0;
}

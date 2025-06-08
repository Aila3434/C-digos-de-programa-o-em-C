#include <stdio.h>

int main() {
    float AREA, RAIO;
    const float PI = 3.14159;

    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &RAIO);

    AREA = PI * RAIO * RAIO;

    printf("A area da circunferencia é: %.2f\n", AREA);

    return 0;
}


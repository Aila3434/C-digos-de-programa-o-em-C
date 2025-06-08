#include <stdio.h>

int main() {
    float AREA, BASE, ALTURA;

    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &BASE);

    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &ALTURA);

    AREA = (BASE * ALTURA) / 2;

    printf("A area do triângulo: %.2f\n", AREA);

    return 0;
}

#include <stdio.h>

int main() {
    float Val1, Val2, Media;

    
    printf("Digite o primeiro valor: ");
    scanf("%f", &Val1);

    printf("Digite o segundo valor: ");
    scanf("%f", &Val2);

    
    Media = (Val1 + Val2) / 2;

    
    printf("A media dos valores: %.2f\n", Media);

    return 0;
}

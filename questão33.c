#include <stdio.h>

int main() {
    float prova1, prova2, prova3, media;

    
    printf("Digite a nota da primeira prova (peso 2): ");
    scanf("%f", &prova1);
    
    printf("Digite a nota da segunda prova (peso 3): ");
    scanf("%f", &prova2);
    
    printf("Digite a nota da terceira prova (peso 5): ");
    scanf("%f", &prova3);

    
    media = (prova1 * 2 + prova2 * 3 + prova3 * 5) / (2 + 3 + 5);

    
    printf("A media final do aluno: %.2f\n", media);

    return 0;
}

#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    int opcao;
    float media;

    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    
    printf("Escolha o tipo de media que deseja calcular:\n");
    printf("1 - Media Aritmetica\n");
    printf("2 - Media Ponderada (pesos 3, 3, 4)\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    
    if (opcao == 1) {
        media = (nota1 + nota2 + nota3) / 3;
        printf("Media Aritmetica: %.2f\n", media);
    } else if (opcao == 2) {
        media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / (3 + 3 + 4);
        printf("Media Ponderada: %.2f\n", media);
    } else {
        printf("Opcao invalida. Por favor, escolha 1 ou 2.\n");
    }

    return 0;
}

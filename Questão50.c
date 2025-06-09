#include <stdio.h>

int main() {
    int nota;

    
    printf("Digite a nota do aluno (0 a 100): ");
    scanf("%d", &nota);


    if (nota < 0 || nota > 100) {
        printf("Nota invalida! Por favor, insira uma nota entre 0 e 100.\n");
        return 1; 
    }

    
    if (nota >= 0 && nota <= 49) {
        printf("Nota: %d - Conceito: Insuficiente\n", nota);
    } else if (nota >= 50 && nota <= 64) {
        printf("Nota: %d - Conceito: Regular\n", nota);
    } else if (nota >= 65 && nota <= 84) {
        printf("Nota: %d - Conceito: Bom\n", nota);
    } else { 
        printf("Nota: %d - Conceito: Otimo\n", nota);
    }

    return 0;
}

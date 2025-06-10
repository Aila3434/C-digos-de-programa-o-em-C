#include <stdio.h>

int main() {
    float nota1, nota2, media;

    
    printf("Digite a primeira nota bimestral: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota bimestral: ");
    scanf("%f", &nota2);

    
    media = (nota1 + nota2) / 2;

    
    if (media > 5.0) {
        printf("Aluno aprovado com media: %.2f\n", media);
    } else {
        printf("Aluno reprovado com media: %.2f\n", media);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3, media;
    float maiorNota, somaPesos;

    
    printf("Digite o codigo do aluno: ");
    scanf("%d", &codigo);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    
    maiorNota = nota1;
    if (nota2 > maiorNota) {
        maiorNota = nota2;
    }
    if (nota3 > maiorNota) {
        maiorNota = nota3;
    }

    
    somaPesos = 0; 
    media = 0; 

    if (maiorNota == nota1) {
        media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10;
    } else if (maiorNota == nota2) {
        media = (nota2 * 4 + nota1 * 3 + nota3 * 3) / 10;
    } else {
        media = (nota3 * 4 + nota1 * 3 + nota2 * 3) / 10;
    }

    
    printf("Codigo do aluno: %d\n", codigo);
    printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Media ponderada: %.2f\n", media);

    
    if (media >= 5.0) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}

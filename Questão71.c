#include <stdio.h>

void coletarDados(char nome[], float *altura, float *peso) {
    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite a altura (em centimentros): ");
    scanf("%f", altura);
    printf("Digite o peso (em kg): ");
    scanf("%f", peso);
}

int main() {
    char nome1[50], nome2[50];
    float altura1, altura2, peso1, peso2;

    
    printf("Dados da primeira pessoa:\n");
    coletarDados(nome1, &altura1, &peso1);

    
    printf("Dados da segunda pessoa:\n");
    coletarDados(nome2, &altura2, &peso2);


    if (peso1 > peso2) {
        printf("%s e a mais pesada.\n", nome1);
    } else {
        printf("%s e a mais pesada.\n", nome2);
    }

    
    if (altura1 > altura2) {
        printf("%s e a mais alta.\n", nome1);
    } else {
        printf("%s e a mais alta.\n", nome2);
    }

    return 0;
}

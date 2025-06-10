#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    float altura1, altura2;
    float peso1, peso2;

    
    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", nome1);
    printf("Digite a altura da primeira pessoa (em cm): ");
    scanf("%f", &altura1);
    printf("Digite o peso da primeira pessoa (em kg): ");
    scanf("%f", &peso1);

    
    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", nome2);
    printf("Digite a altura da segunda pessoa (em cm): ");
    scanf("%f", &altura2);
    printf("Digite o peso da segunda pessoa (em kg): ");
    scanf("%f", &peso2);

    
    if (peso1 > peso2) {
        printf("A pessoa mais pesada é: %s com %.2f kg\n", nome1, peso1);
    } else {
        printf("A pessoa mais pesada é: %s com %.2f kg\n", nome2, peso2);
    }

    
    if (altura1 > altura2) {
        printf("A pessoa mais alta é: %s com %.2f m\n", nome1, altura1);
    } else {
        printf("A pessoa mais alta é: %s com %.2f m\n", nome2, altura2);
    }

    return 0;
}

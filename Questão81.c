#include <stdio.h>

int main() {
    char letra;

    
    printf("Digite uma letra do alfabeto: ");
    scanf(" %c", &letra);

    
    letra = tolower(letra);

    
    if (letra >= 'a' && letra <= 'z') {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            printf("A letra '%c' e uma vogal.\n", letra);
        } else {
            printf("A letra '%c' e uma consoante.\n", letra);
        }
    } else {
        printf("Erro: Por favor, digite apenas uma letra do alfabeto.\n");
    }

    return 0;
}

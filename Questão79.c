#include <stdio.h>

int main() {
    char estadoCivil;


    printf("Digite a primeira letra do seu estado civil (S, C, V, D, Q): ");
    scanf(" %c", &estadoCivil);

    
    switch (estadoCivil) {
        case 'S':
        case 's':
            printf("Estado Civil: Solteiro(a)\n");
            break;
        case 'C':
        case 'c':
            printf("Estado Civil: Casado(a)\n");
            break;
        case 'V':
        case 'v':
            printf("Estado Civil: Viuvo(a)\n");
            break;
        case 'D':
        case 'd':
            printf("Estado Civil: Divorciado(a)\n");
            break;
        case 'Q':
        case 'q':
            printf("Estado Civil: Desquitado(a)\n");
            break;
        default:
            printf("Erro: Estado civil invalido! Use S, C, V, D ou Q.\n");
            break;
    }

    return 0;
}

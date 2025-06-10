#include <stdio.h>

int main() {
    int dia;

    
    printf("Digite um numero de 1 a 7 para saber o dia da semana (1 - Domingo, 2 - Segunda, ... , 7 - Sábado): ");
    scanf("%d", &dia);

    
    switch (dia) {
        case 1:
            printf("Dia da Semana: Domingo\n");
            break;
        case 2:
            printf("Dia da Semana: Segunda-feira\n");
            break;
        case 3:
            printf("Dia da Semana: Terca-feira\n");
            break;
        case 4:
            printf("Dia da Semana: Quarta-feira\n");
            break;
        case 5:
            printf("Dia da Semana: Quinta-feira\n");
            break;
        case 6:
            printf("Dia da Semana: Sexta-feira\n");
            break;
        case 7:
            printf("Dia da Semana: Sabado\n");
            break;
        default:
            printf("Erro: Numero invalido! Por favor, digite um numero de 1 a 7.\n");
            break;
    }

    return 0;
}

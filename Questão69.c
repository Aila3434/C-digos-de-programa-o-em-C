#include <stdio.h>

int main() {
    int dia, mes, signo;

    
    printf("Digite o dia do seu aniversario (1-31): ");
    scanf("%d", &dia);
    printf("Digite o mes do seu aniversario (1-12): ");
    scanf("%d", &mes);

    
    if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19)) {
        signo = 1; 
    } else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)) {
        signo = 2; 
    } else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)) {
        signo = 3; 
    } else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)) {
        signo = 4;
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        signo = 5; 
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21)) {
        signo = 6; 
    } else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22)) {
        signo = 7; 
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        signo = 8; 
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        signo = 9; 
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        signo = 10; 
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        signo = 11; 
    } else {
        signo = 12; 
    }

    
    switch (signo) {
        case 1: printf("Voce e do seguinte signo do zodiaco: Aquário\n"); break;
        case 2: printf("Voce e do seguinte signo do zodiaco: Peixes\n"); break;
        case 3: printf("Voce e do seguinte signo do zodiaco: Áries\n"); break;
        case 4: printf("Voce e do seguinte signo do zodiaco: Touro\n"); break;
        case 5: printf("Voce e do seguinte signo do zodiaco: Gêmeos\n"); break;
        case 6: printf("Voce e do seguinte signo do zodiaco: Câncer\n"); break;
        case 7: printf("Voce e do seguinte signo do zodiaco: Leão\n"); break;
        case 8: printf("Voce e do seguinte signo do zodiaco: Virgem\n"); break;
        case 9: printf("Voce e do seguinte signo do zodiaco: Libra\n"); break;
        case 10: printf("Voce e do seguinte signo do zodiaco: Escorpião\n"); break;
        case 11: printf("Voce e do seguinte signo do zodiaco: Sagitário\n"); break;
        case 12: printf("Voce e do seguinte signo do zodiaco: Capricórnio\n"); break;
    }

    return 0;
}

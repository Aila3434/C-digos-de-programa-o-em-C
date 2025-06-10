#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    char categoria[20];

    
    printf("Digite o nome do atleta: ");
    scanf("%s", nome);

    
    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    
    switch (idade) {
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            snprintf(categoria, sizeof(categoria), "Infantil");
            break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            snprintf(categoria, sizeof(categoria), "Juvenil");
            break;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            snprintf(categoria, sizeof(categoria), "Junior");
            break;
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
            snprintf(categoria, sizeof(categoria), "Profissional");
            break;
        default:
            snprintf(categoria, sizeof(categoria), "Idade fora das categorias");
            break;
    }

    
    printf("O atleta %s pertence a categoria: %s\n", nome, categoria);

    return 0;
}

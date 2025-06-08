#include <stdio.h>

int main() {
    int anos, meses, dias;

    
    printf("Digite sua idade em anos: ");
    scanf("%d", &anos);
    
    printf("Digite os meses adicionais: ");
    scanf("%d", &meses);

    
    dias = (anos * 365) + (meses * 30); 

    
    printf("Voce ja viveu aproximadamente %d dias.\n", dias);

    return 0;
}

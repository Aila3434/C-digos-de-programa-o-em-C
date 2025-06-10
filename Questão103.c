#include <stdio.h>

int main() {
    double massa_inicial;
    double massa_atual;
    int tempo = 0; 


    printf("Digite a massa inicial do material (em gramas): ");
    scanf("%lf", &massa_inicial);

    
    massa_atual = massa_inicial;

    
    while (massa_atual >= 0.05) {
        massa_atual /= 2; 
        tempo += 50;      
    }

    
    printf("O tempo necessário para que a massa se torne menor que 0,05 gramas é: %d segundos.\n", tempo);

    return 0;
}

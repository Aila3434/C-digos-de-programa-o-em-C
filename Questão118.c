#include <stdio.h>

int main() {
    float alturaChico = 1.50; 
    float alturaZe = 1.10;    
    int anos = 0;             

    
    while (alturaZe <= alturaChico) {
        alturaChico += 0.02; 
        alturaZe += 0.03;     
        anos++;               
    }

    
    printf("Zé será maior que Chico em %d anos.\n", anos);

    return 0;
}

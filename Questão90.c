#include <stdio.h>

int main() {
    int i;

    printf("Múltiplos de 7 inferiores a 1000:\n");
    
    
    for (i = 7; i < 1000; i += 7) {
        printf("%d\n", i);
    }

    return 0;
}

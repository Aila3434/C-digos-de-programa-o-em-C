#include <stdio.h>

int main() {
    int matricula;
    int ano_cod, semestre, ordem;
    int ano_completo;
    
    printf("Digite o numero de matricula (formato AASDDDD): ");
    scanf("%d", &matricula);
    
    
    if (matricula < 1000000 || matricula > 9999999) {
        printf("Erro: a matricula deve estar no formato AASDDDD (7 digitos).\n");
        return 1;
    }
    
    
    ano_cod = matricula / 100000;      
    semestre = (matricula / 10000) % 10; 
    ordem = matricula % 10000;         
    
    
    if (semestre != 1 && semestre != 2) {
        printf("Erro: o semestre (S) deve ser 1 ou 2.\n");
        return 1;
    }
    
    
    if (ano_cod <= 25) {
        ano_completo = 2000 + ano_cod;
    } else {
        ano_completo = 1900 + ano_cod;
    }
    
    printf("Ano de matricula: %d\n", ano_completo);
    printf("Semestre: %d\n", semestre);
    printf("Ordem de matricula no semestre: %04d\n", ordem);
    
    return 0;
}

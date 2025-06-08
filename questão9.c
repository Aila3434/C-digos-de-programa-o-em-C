#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50], nome_completo[101];

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite o sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);
    sobrenome[strcspn(sobrenome, "\n")] = 0; 

    
    strcpy(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);

    printf("Nome completo: %s\n", nome_completo);

    return 0;
}



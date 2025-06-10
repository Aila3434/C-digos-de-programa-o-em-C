#include <stdio.h>

int main() {
    int numAlunos, i;
    int menosDe10 = 0, entre10e15 = 0, acimaDe15 = 0;
    int utilizacao;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    
    for (i = 0; i < numAlunos; i++) {
        printf("Digite o número de vezes que o aluno %d utilizou o restaurante: ", i + 1);
        scanf("%d", &utilizacao);

        
        if (utilizacao < 10) {
            menosDe10++;
        } else if (utilizacao >= 10 && utilizacao <= 15) {
            entre10e15++;
        } else {
            acimaDe15++;
        }
    }

    
    float percentualMenosDe10 = (menosDe10 / (float)numAlunos) * 100;
    float percentualEntre10e15 = (entre10e15 / (float)numAlunos) * 100;
    float percentualAcimaDe15 = (acimaDe15 / (float)numAlunos) * 100;

    
    printf("a) Percentual de alunos que utilizaram menos que 10 vezes: %.2f%%\n", percentualMenosDe10);
    printf("b) Percentual de alunos que utilizaram entre 10 e 15 vezes: %.2f%%\n", percentualEntre10e15);
    printf("c) Percentual de alunos que utilizaram acima de 15 vezes: %.2f%%\n", percentualAcimaDe15);

    return 0;
}

#include <stdio.h>

int main() {
    int data_ddmmaa, data_aammdd;
    int dd, mm, aa;
    
    printf("Digite uma data no formato DDMMAA:");
    scanf("%d", &data_ddmmaa);
    
    
    if (data_ddmmaa < 000000 || data_ddmmaa > 999999) {
        printf("Erro: a data deve estar no formato DDMMAA (6 digitos).\n");
        return 1;
    }
    
    
    dd = data_ddmmaa / 10000;        
    mm = (data_ddmmaa / 100) % 100;  
    aa = data_ddmmaa % 100;          
    
    
    data_aammdd = aa * 10000 + mm * 100 + dd;
    
    printf("Data convertida: %06d -> %06d\n", data_ddmmaa, data_aammdd);
    
    return 0;
}

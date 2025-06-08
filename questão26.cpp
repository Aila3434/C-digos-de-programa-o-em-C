#include <stdio.h>

int main() {  

  float salario_bruto, contribuicao_previdencia, imposto, salario_liquido;    
  
  
    printf("Digite o salario bruto: ");    
	scanf("%f", &salario_bruto);    
	
	
	
	 contribuicao_previdencia = salario_bruto * 0.10;    
	 
	  float salario_apos_previdencia = salario_bruto - contribuicao_previdencia;    
	     
	 imposto = salario_apos_previdencia * 0.05;    
		 
	 salario_liquido = salario_apos_previdencia - imposto;    
	 
		   
		   
		    printf("O salario liquido: %.2f\n", salario_liquido);    
			
			return 0;}

#include <stdio.h>

int main() {   

  float velocidade_kmh, velocidade_ms;    
  
  
   printf("Digite a velocidade do veiculo em km/h: ");   
    scanf("%f", &velocidade_kmh);    
	
	
	velocidade_ms = velocidade_kmh / 3.6;    
	
	
	printf("A velocidade em metros por segundo: %.2f m/s\n", velocidade_ms);   
	
	 return 0;}

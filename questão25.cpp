#include <stdio.h>

int main() {   

  int Int1, Int2;   
  int quociente, resto;   
   
   printf("Digite o primeiro número inteiro (Int1): ");   
    scanf("%d", &Int1);   
	
	 printf("Digite o segundo número inteiro (Int2): ");    
	 scanf("%d", &Int2);    
	 
	 quociente = Int1 / Int2;    
	 resto = Int1 % Int2;   
	 
	 
	 printf("Quociente: %d\n", quociente);    
	 printf("Resto: %d\n", resto);   
	 
	  return 0;}

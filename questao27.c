#include <stdio.h>

int main() {    

    int Codigo;   
	 int A, B, C, D, E;   
	  int DigitoV, S;     
	  
	  
	  printf("Digite um codigo de cinco algarismos: ");    
	  scanf("%d", &Codigo);      
	  
	  
	  A = Codigo / 10000 % 10;    
	  B = Codigo / 1000 % 10;      
	  C = Codigo / 100 % 10;       
	  D = Codigo / 10 % 10;       
	  E = Codigo % 10;          
	  
	  S = 6 * A + 5 * B + 4 * C + 3 * D + 2 * E;    
	  
	   DigitoV = S % 7;    
	   
	    printf("O digito verificador: %d\n", DigitoV);   
		
		
		 return 0;}

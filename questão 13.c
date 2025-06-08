#include <stdio.h>

int main (){
	
	float F;
	float C;
	
	printf("insira o valor em FAHRENHEIT: ");
	scanf("%3f", &F);
	
	C= (F-32)* (5.0/9.0);
	
	printf("Valor em CELSIUS: %.2f\n", C);
	
	return 0;
}

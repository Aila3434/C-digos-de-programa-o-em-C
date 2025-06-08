#include <stdio.h>

int main (){
	
	float C;
	float F;
	
	printf("insira o valor em celsius: ");
	scanf("%f", &C);
	
	F= (9*C+160)/5;
	
	printf("Valor em FAHRENHEIT: %2.f", F);
	
	return 0;
}

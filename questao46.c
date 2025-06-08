#include <stdio.h>

int main(){
	float A, B, C, soma;
	
	printf("Digite o valor de A:");
	scanf("%f", &A);
	
	printf("Digite o valor de B:");
	scanf("%f", &B);
	
	printf("Digite o valor de C:");
	scanf("%f", &C);
	
	soma= A+B;
	
	if (soma< C){
		printf("A soma de A e B e MENOR que C.\n");
	
	}else if (soma>C){
		printf("A soma de A com B e MAIOR QUE C.\n ");
	
	}else {
		printf("A soma de A com B e IGUAL a C.\n ");
	}
	
	return 0;
}

#include <stdio.h>

int main (){
	
	int A, B;
	
	
	printf("Digite o primeiro valor:");
	scanf("%d",&A);
	
	printf("Digite o segundo valor:");
	scanf("%d",&B);
	
	if(A<B) {
		printf("Resultado %d", B);
	
	} else if(A>B) {
		printf("Resultado %d",A);
	}
	else {
		printf("Os valores são iguais: %d", A);
	}
	
	return 0;
}

#include <stdio.h>
#include <math.h>


int main (){
	
	float raio;
	float altura;
	float VOLUME;
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	VOLUME = 3.14159 * raio *raio * altura;
	
	printf("Volume da lata: %.2f", VOLUME);
	
	return 0;
	
}

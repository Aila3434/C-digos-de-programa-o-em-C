#include <stdio.h>
#include <math.h>

int main (){
	
	float dist;
	float velo;
	float temp;
	float litrosusados;
	
	printf("Informe tempo: ");
	scanf("%f", &temp);
	
	printf("Informe velocidade: ");
	scanf("%f", &velo);
	
	dist = temp * velo;
	
	litrosusados = dist / 12 ;
	
	printf("Resultados\n velocidade:%.2f\n tempo gasto:%.2f\n  ", velo, temp);
	printf("distancia:%.2f\n litros usados:%.2f\n", dist, litrosusados);
	
	return 0;
	
}

#include <stdio.h>

int main(){
	 
	 int A, B, C,D;
	 int SOMA1, SOMA2, SOMA3, SOMA4, SOMA5, SOMA6;
	 int MULTI1, MULTI2, MULTI3, MULTI4, MULTI5, MULTI6;
	 
	 
	 printf("Digite valor de A:");
	 scanf("%d", &A);
	 
	 printf("Digite valor de B:");
	 scanf("%d", &B);
	 
	 printf("Digite valor de C:");
	 scanf("%d", &C);
	 
	 printf("Digite valor de D:");
	 scanf("%d", &D);
	 
	 SOMA1 = A+B;
	 MULTI1= A*B;
	 
	 SOMA2 = A+C;
	 MULTI2= A*C;
	 
	 SOMA3 = A+D;
	 MULTI3= A*D;
	 
	 SOMA4 = B+C;
	 MULTI4= B*C;
	 
	 SOMA5 = B+D;
	 MULTI5= B*D;
	 
	 SOMA6 = C+D;
	 MULTI6= C*D;
	 
	 printf(" Resultado de A com B: %d;%d\n", SOMA1, MULTI1);
	 printf(" Resultado de A com C: %d;%d\n", SOMA2, MULTI2);
	 printf(" Resultado de A com D: %d;%d\n", SOMA3, MULTI3);
	 printf(" Resultado de B com C: %d;%d\n", SOMA4, MULTI4);
	 printf(" Resultado de B com D: %d;%d\n", SOMA5, MULTI5);
	 printf(" Resultado de C com D: %d;%d\n", SOMA6, MULTI6);
	 
	 return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double A, B, C;
	double D, E, F, G, H;
	scanf("%lf%lf%lf", &A, &B, &C);
	/*TRIANGULO*/ D= (A*C)/2; 
	/*CIRCULO*/	  E= 3.14159*(C*C);
	/*TRAPEZIO*/  F= ((A+B)/2)*C;
	/*QUADRADO*/  G= B*B;
	/*RETANGULO*/ H= A*B; 
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", D, E, F, G, H);
	

	return 0;
	
	
}
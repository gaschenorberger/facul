#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
	float b,c,valorHip;
	
	printf("Entre com o valor de B: \n");
	scanf("%f", &b);
	
	printf("Entre com o valor de C: \n");
	scanf("%f", &c);
	
	valorHip = sqrt(pow(b,2) + pow(c,2));
	
	printf("O valor da Hipotenusa: %f", valorHip);
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
	float x,y,z,somaXY,somaXZ,somaYZ;
	
	printf("Entre com primeiro valor:\n");
	scanf("%f", &x);
	
	printf("Entre com segundo valor:\n");
	scanf("%f", &y);
	
	printf("Entre com terceiro valor:\n");
	scanf("%f", &z);
	
	somaXY = x+y;
	somaXZ = x+z;
	somaYZ = y+z;
	
	if ((x == 0 ) or (y == 0) or (z == 0)){
		printf("Invalido, nao pode zero");
	}
	else {
		if ((x > somaYZ) or (y > somaXZ) or (z > somaXY)){
			printf("Numeros invalidos");
		}
		else {		
			if ((x == y) and (x == z) and (z == y))  {
				printf("Esse e um triangulo equilatero");
			}
			else if ((x == y) or (x == z) or (z == y))	{
				printf("Esse e um triangulo isosceles");
			}
			else if ((x != y) and (x != y) and (z != y)) {
				printf("Esse e um triangulo escaleno");
			}
		}
	}
	
}
	



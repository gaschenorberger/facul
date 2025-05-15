#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
	int numero1, numero2;
	
	printf("Numero 1:\n");
	scanf("%d", &numero1);
	
	printf("Numero 1:\n");
	scanf("%d", &numero2);
	
	if (numero1 == numero2) {
		printf("Os numeros sao iguais");
	}
	else if (numero1 > numero2) {
		printf("O numero %d e maior que o numero %d", numero1,numero2);
	}
	else {
		printf("O numero %d e maior que o numero %d", numero2,numero1);
	}
}


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
	int idade;
	
	printf("Quantos anos voce tem?\n");
	scanf("%d", &idade);
	
	if (idade <= 12) {
		printf("Voce e uma crianca");
	}
	else if (idade >= 13 and idade <=17) {
		printf("Voce e um adolescente");
	}
	else if (idade >=18 and idade <=59) {
		printf("Voce e um adulto");
	}
	else {
		printf("Voce e um idoso");
	}
}


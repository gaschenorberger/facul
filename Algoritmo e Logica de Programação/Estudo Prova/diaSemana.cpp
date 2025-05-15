#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
	int dia;
	
	printf("De 1 a 7, qual e o dia da semana hoje?\n");
	scanf("%d", &dia);
	
	switch (dia) {
		case 1: {
			printf("Hoje e domingo");
			break;
		}
		case 2: {
			printf("Hoje e segunda");
			break;
		}
		case 3: {
			printf("Hoje e terca");
			break;
		}
		case 4: {
			printf("Hoje e quarta");
			break;
		}
		case 5: {
			printf("Hoje e quinta");
			break;
		}
		case 6: {
			printf("Hoje e sexta");
			break;
		}
		case 7: {
			printf("Hoje e sabado");
			break;
		}
		default: {
			printf("Voce digitou o numero errado");
			break;
		}
	}
}


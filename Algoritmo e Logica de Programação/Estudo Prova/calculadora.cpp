#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main() {
	char operacao;
	float numero1, numero2, resultado;
	
	printf("Digite sua conta abaixo: (operadores: '+, -, *, /') (ex: 10 + 5)\n");
	scanf("%f %c %f", &numero1,&operacao,&numero2);
	
	switch (operacao) {
		case '+': {
			resultado = numero1 + numero2;
			printf("%.0f", resultado);
			break;
		}
		case '-': {
			resultado = numero1 - numero2;
			printf("%.0f", resultado);
			break;
		}
		case '*': {
			resultado = numero1 * numero2;
			printf("%.0f", resultado);
			break;
		}
		case '/': {
			if (numero2 == 0) {
				printf("A divisao nao pode ser feita por 0");
				break;
			}
			else {
				resultado = numero1 / numero2;
				printf("%.0f", resultado);
				break;
			}
		}
		default: {
			printf("Voce escolheu a operacao errada");
			break;
		}
	}
}


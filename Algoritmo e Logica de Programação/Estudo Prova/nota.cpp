#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
	float nota1, nota2, nota3, media;
	
	printf("Qual foi a primeira nota?\n");
	scanf("%f", &nota1);
	
	printf("Qual foi a segunda nota?\n");
	scanf("%f", &nota2);
	
	printf("Qual foi a terceira nota?\n");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3)/ 3;
	
	if (media >= 6) {
		printf("Sua media e %.1f, voce esta aprovado", media);
	}
	
	else if (media < 5) {
		printf("Sua media e %.1f, voce esta reprovado", media);
	}
	
	else if (media >= 5 and media <= 5.9) {
		printf("Sua media e %.1f, voce esta de exame", media);
	}
}


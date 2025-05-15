#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	float vlTotal, vlFinal;
	int opcPag;
	
	printf("Qual foi o valor da compra? \n");
	scanf("%f", &vlTotal);
	
	printf("(Digite apenas o numero) Qual sera a opcao de pagamento? \n");
	printf("1- A vista | 2- 30 dias direto | 3- 60 dias direto | 4- 90 dias direto \n");
	scanf("%d", &opcPag);
	
	if (opcPag == 1){
		vlFinal = vlTotal * 0.9;
		printf("O preco final sera %2.f", vlFinal);
	}
	else if (opcPag == 2){
		vlFinal = vlTotal * 0.95;
		printf("O preco final sera %2.f", vlFinal);
	}
	else if (opcPag == 3){
		printf("O preco final sera %2.f", vlTotal);
	}
	else{
		vlFinal = vlTotal * 1.05;
		printf("O preco final sera %2.f", vlFinal);
	}
	
	
}

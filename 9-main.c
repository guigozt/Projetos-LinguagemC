#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); //Acentos da lingua portuguesa
	
	float n1, n2; //Variaveis
	
	printf("Digite dois n�meros para saber o maior entre eles.\n");
	
	printf("\nInsira o primeiro n�mero: ");
	scanf("%f", &n1);
	
	printf("\nInsira o segundo n�mero: ");
	scanf("%f", &n2);
	
	if(n1>n2){ //Se n1 for maior que n2...
		printf("\nO maior entre os n�meros inseridos �: %.2f", n1);
		
	}else if(n1<n2){ //Se n�o, se n1 for menor que n2...
		printf("\nO maior entre os n�meros inseridos �: %.2f", n2);
		
	}else if(n1 == n2){ //Se n�o, se n1 for igual a n2...
		printf("\nOs n�meros s�o iguais");
	}
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main (){
	setlocale(LC_ALL,"Portuguese");

	int tamanho=11; //Declara a variavel TAMANHO recebendo 11
	int p; // Posi��es do vetor
	int vetor[tamanho]; //Declara um vetor com o n�meros de posi��es de acordo com a variavel TAMANHO
	
	for(p=0; p<tamanho; p++){ //Loop enquanto p(posi��es) for de 0 at� o tamanho da variavel TAMANHO, sendo incrementado 1 unidade a mais 
	
		vetor[p] = p; // Indica que a posi��o atual do vetor, recebe o valor de p 
//posi��o 0 = 0; posi��o 1 = 1; posi��o 2 = 2; posi��o 3 = 3

	    vetor[p] = vetor[p]*2; // Indica que o novo valor da posi��o do vetor (vetor[p]) vai receber o seu valor multiplicado por 2 
//posi��o 0 = 0*2 = 0; posi��o 1 = 1*2 = 2; posi��o 2 = 2*2 = 4; posi��o 3 = 3*2 = 6
	}

	printf("Valores dobrados do vetor:\n");

	for(p=0; p<tamanho; p++){ //Loop para imprimir os resultados
	
		printf("\nValor dobrado da posi��o [%d] �: %d", p, vetor[p]); //Indica as posi��es e o seu valor dobrado
	}

	
}

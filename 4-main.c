#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[7], p1, p2, aux; // Declara um vetor de 7 posi��es - p1 declara as posi��es; p2 as posi��es seguinte; aux vai guardar os valores trocados (auxiliar) 
	
	printf("Digite os valores para as 7 posi��es do vetor, que ao final ser�o organizados de forma crescente \n"); // Mensagem para o usuario
	
	for(p1=0; p1<7; p1++){ // loop se repitira enquanto p1(posi��es) for de 0 at� 7 - Sendp Incrementado 1 unidade a mais (para pular para a posi��o seguinte)
	
		printf("\nDigite um n�mero para a posi��o [%d]: ", p1); // Pede ao usu�rio inserir um n�mero na posi��o atual do loop
		scanf("%d", &vetor[p1]); // Armazena os valores digitados nas posi��es dentro do vetor
	}
	
	for(p1=0; p1<7; p1++){ //Os valores de p1 ser�o comparados, para organiza-los enquanto o loop atender a mesma condi��o
		
		for(p2=p1+1; p2<7; p2++){ // p2 vai receber o valor de p1+1, pois o valor vai ser comparado com os valores � frente dele - p2(posi��es) vai at� 7 - e ser� incrementado 1 unidade a mais
			
 			if(vetor[p1]>vetor[p2]){ //SE o valor de p1 for maior que o valor de p2...
				
				aux=vetor[p1]; // Aux, vai receber o valor de p1 e guarda-lo 
				vetor[p1]=vetor[p2]; // Posi��o p1 vai receber o valor de p2 (posi��o 0 vai receber posi��o 1)
				vetor[p2]=aux; // Posi��o p2 vai receber o valor de Aux, que foi guardada
				
	// Ou seja, os valores ir�o trocar de lugar caso uma seja maior que a outra, isso ira se repetir posi��o por posi��o 
	
			}
		}
	}
	
	for(p1=0; p1<7; p1++){ // loop usado para imprimir os valores do vetor agora classificados em ordem crescente
	
		printf("\nO valor da posi��o [%d] agora �: %d", p1, vetor[p1]); //Imprime a posi��o e o valor correspondente no vetor ap�s a ordena��o
	}
	
	return 0;
}

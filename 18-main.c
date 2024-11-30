#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[9]; //Vetor com 9 posi��es
	int i, j; //i (posi��es) j (Divisor)
	int cont; //Contador
	
	printf("Mostraremos se os n�meros inseridos s�o primos: \n");
	
	for(i=0; i<9; i++){ //Loop para mensagem
		printf("\nInsira um n�mero inteiro para a posi��o [%d]: ", i); //Indica a posi��o atual do vetor
		scanf("%d", &vetor[i]); //Armazena o valor digitado na posi��o atual
	}
	
	for(i=0; i<9; i++){ //Posi��o de i ir� de 0 at� 9
		cont = 0; //Contador ser� reiniciado ao fim de cada loop (posi��o)
		
		for(j=1; j<=vetor[i]; j++){ //J (divisor) ir� de 1 at� o valor digitado em vetor[i] e sendo incrementado em cada loop -------------- EX: 6/1, 6/2, 6/3, 6/4, 6/5 e 6/6
		 
			if(vetor[i]%j == 0){ //Se o resto da divis�o entre [valor atual do vetor] e [j] for igual a 0 
				cont++; //Ser� aplicado 1 unidadeao cont
			}
		}
		
		if(cont == 2){ //Se cont for igual a 2 ao fim do loop...
		
			printf("\nO n�mero %d na posi��o [%d] � primo!", vetor[i], i);
			
		}
		
	}
	
	return 0;
}

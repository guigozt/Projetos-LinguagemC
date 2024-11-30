#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int vetor [10]; // Declara um vetor de 10 posi��es
	int i; // Vari�vel que declara as posi��es do vetor
	
	printf("Digite os n�meros para �s 10 posi��es do vetor que ser�o dobradas no final\n");
	
	// Loop FOR para ler os numeros e calcular o dobro
	
	for(i=0; i<10; i++){ // A sequ�ncia vai se repetir enquanto i (posi��es) for de 0 at� a 10 (posi��o do vetor)
	
		printf("\nDigite um n�mero para a posi��o [%d]: ", i); //(%d, i) indica a posi��o atual do vetor, pois busca a variavel i
		scanf("%d", &vetor[i]); // Vai armazenar dentro do vetor[a variavel dentro da posi��o]
		
		vetor[i] = vetor[i] * 2; // A variavel dentro da posi��o do vetor ser� multiplicada por 2 (dobro)
	}
	
	//Imprime o valor com os valores dobrados
	
	printf("\nValores dobrados no vetor: \n");
	
	for (i=0; i<10; i++){ // Vai usar as mesmas condi��es para imprimir os resultados
		printf("Posi��o [%d]: %d \n", i, vetor[i]); // (posi��o [%d}, i) busca o valor da posi��o, indicada pela variavel i / e (%d, vetor[i]) busca o novo valor (dobrado), dentro da posi��o do vetor
	}

	return 0;
}
	


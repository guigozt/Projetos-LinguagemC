#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int num; //Variavel que o usuario vai fornecer
	int res; //variavel que guarda a resposta
	int i; //Posi��o
	
	printf("Insira um n�mero para mostrar a Tabuada:\n");
	
	printf("\nDigite um n�mero: ");
	scanf("%d", &num);
	
	for(i=0; i<=10; i++){ //Enquanto a posi��o (multiplicador) for de 0 at� 10
		
		res = num*i; //Res recebe aopera��o de cada loop (num*0, num*1, num*2...)
		
		printf("\n%d X %d = %d", num, i, res);
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, res; //V�riaveis
	
	printf("Digite 4 n�meros em sequ�ncia para descobrir a m�dia entre eles \n"); //Mensagem ao us�ario
	
	printf("\nInsira o primeiro n�mero: ");
	scanf("%f", &n1); //Armazena o valor inserido na v�riavel
	
	printf("\nInsira o segundo n�mero: ");
	scanf("%f", &n2);
	
	printf("\nInsira o terceiro n�mero: ");
	scanf("%f", &n3);
	
	printf("\nInsira o quarto n�mero: ");
	scanf("%f", &n4);
	
	res = (n1 + n2 + n3 + n4)/4; //M�dia = as v�riaveis ser�o somadas e divididas por 4 (quantidade de n�meros na opera��o)
	
	printf("\nA m�dia entre os n�meros �: %.2f \n", res);
		
	return 0;
}

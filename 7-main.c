#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	float sal, perc, aum, novo_sal; //V�riaveis
	
	printf("Insira o seu sal�rio e o valor percentual de aumento, que ser� calculado ao final \n"); //Mensagem ao usuario
	
	printf("\nDigite o valor do seu sal�rio: ");
	scanf("%f", &sal); //Armazena o valor inserido na v�riavel
	
	printf("\nDigite o valor percentual de aumento: ");
	scanf("%f", &perc);
	
	aum = sal * (perc/100); //Calcula somente o valor o aumento
	
	novo_sal = sal + aum; //Calcula o sal�rio + aumento
	
	printf("\nO valor do aumento � de: %.2f \n", aum); //Imprime o valor do aumento
	
	printf("\nO valor do novo sal�rio �: %.2f", novo_sal); //Imprime o novo valor do sal�rio
	
	return 0;
}

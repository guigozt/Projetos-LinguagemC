#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); //Configura��o a lingua portuguesa
	
	printf("Calculadora B�sica \n");
	
	int op = 1; //Variavel op (referente as op��es de opera��es)
	float n1, n2, res; //Varivaeis
	
	printf("\nDigite 1 para somar: \n");
	printf("\nDigite 2 para subtrair: \n");
	printf("\nDigite 3 para multiplicar: \n");
	printf("\nDigite 4 para dividir: \n");
	printf("\nDigite 0 para Sair: \n");
	
	printf("\nInsire a op��o desejada: ");
	scanf("%d", &op); //Armazena a op��o inserido
	
	while(op==0){ //Enquanto op for igual a 0...
		
		printf("\nCalculadora encerrada");
		return exit;
}

    while(op>4){ //Enquanto op for maior que 4
    	printf("\nOpera��o inv�lida, tente novamente:");
    	scanf("%d", &op); //Tenta armazenar o valor correto das op��es
    	
    	if(op == 0){ //Se ap�s as op��es inv�lidas, o usuario digitar 0 (sair)...
    		printf("\nCalculadora encerrada");
    		return exit;
		}
	}
		
		system("cls"); //Se o �suario inserir corretamente, a tela � limpa
		
		printf("Digite o primeiro n�mero: ");
		scanf("%f", &n1);
		
		printf("\nDigite o segundo n�mero: ");
		scanf("%f", &n2);	
		
		switch(op){ //Se op for igual a uma das case (situa��es)...
			
			case 1: //SOMA
				res = n1 + n2;
				printf("\nO valor da soma �: %.2f", res);
				break;
				
			case 2: //SUBTRA��O
				res = n1 - n2;
				printf("\nO valor da subtra��o �: %.2f", res);
				break;
				
			case 3: //MULTIPLICA��O
				res = n1 * n2;
				printf("\nO valor da multiplica��o �: %.2f", res);
				break;
				
			case 4: //DIVIS�O
				
				while(n2==0){ //Enquanto n2 for igual a 0...
				
				printf("\nImposs�vel divis�o por zero! Digite outro valor para o segundo n�mero: ");
				scanf("%f", &n2); //Tenta armazenar o valor correto de n2
				}
				
				res = n1 / n2; //Se o �suario inserir corretamente, a conta � feita normalmente
				printf("\nO valor da divis�o �: %.2f", res);
				break;
		}
	
	return 0;
}

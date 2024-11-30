#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); //Configura��o � lingua portuguesa
	
	float notaT, notaA, notaE; //Declara as variaveis das notas
	float media; //Declara variavel para a m�dia das notas
	
	printf("Insira as notas para saber a m�dia da nota e o conceito atribuida a ela: \n");
	
	printf("\nInsira a nota do Trabalho: "); //Nota do Trabalho
	scanf("%f", &notaT);
	
	printf("\nInsira a nota da Avalia��o: "); //Nota da Avali��o
	scanf("%f", &notaA);
	
	printf("\nInsira a nota do Exame: "); //Nota do Exame
	scanf("%f", &notaE);
	
	media = (notaT*2 + notaA*3 + notaE*5)/10; //o trabalho tem peso 2 (notaT*2) avalia��o tem peso 3 (notaA*3) exame tem peso 5 (notaE*5) e dividido pela soma dos pesos (2+3+5=10)
	
	printf("\nA m�dia da nota �: %.2f", media);
	
	if(media>=0 && media<5.0){ //Se media for maior ou igual a 0 e menor que 5
		printf("\nConceito: E");
		
	}else if(media>=5.0 && media<6.0){ //Caso contrario, se media for maior ou igual a 5 e menor que 6
		printf("\nConceito: D");
		
	}else if(media>=6.0 && media<7.0){ //Caso contrario, se media for maior ou igual a 6 e menor que 7
		printf("\nConceito: C");
		
	}else if(media>=7.0 && media<8.0){ //Caso contrario, se media for maior ou igualk a 7 e menor que 8
		printf("\nConceito: B");
		
	}else if(media>=8.0 && media <=10){ //Caso contrario, se media for maior ou igual a 8 e menor ou igual 10
	    printf("\nConceito: A");
	    
}

    if(media>10){//Se m�dia for maior que 10
    	printf("\nValores incorretos ou inv�lidos");
}
	
	return 0;
}

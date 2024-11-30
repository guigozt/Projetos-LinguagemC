#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//-------------Fun��es para cacular------------------------------------------------------

float calcLucro_Distri(float p_fabr, float porc_dist){ //Fun�ao do valor do Lucro do Distribuidor (par�metros -> pre�o de fabrica e porcentagem do distribuidor
	
	return p_fabr * porc_dist / 100; //Retona o valor de p_fabr multiplicado por (porc_dist dividido por 100)
}

float calcImposto (float p_fabr, float porc_imposto){ //Fun��o do valor do Imposto (par�metros -> pre�o de fabrica e porcentagem do imposto
	
	return p_fabr * porc_imposto / 100; //Retona o valor de p_fabr multiplicado por (porc_imposto dividido por 100)
}

float calcValor_Final(float p_fabr, float valor_distri, float valor_imp){ //Fun��o do Valor Final (par�metros -> pre�o de fabrica, valor do lucro do distribuidor e valor do imposto (retomado das fun��es acima)  
	
	return p_fabr + valor_distri + valor_imp; //Retona os valores somados	
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float preco_fabr, porc_distri, porc_imp; //Variaveis que ser�o inseridas o valores pelo us�ario
	float lucro_distri, vlr_imp, vlr_total; //Variaveis para receber as fun��es
	
	printf("Verificaremos o Custo de um carro tendo no��o das porcentagens do distribuidor e impostos \n");
	
	printf("\nInsira o pre�o de f�brica do carro: ");
	scanf("%f", &preco_fabr);
	
	printf("\nInsira a porcentagem de lucro do distribuidor: ");
	scanf("%f", &porc_distri);
	
	printf("\nInsira a porcentagem de impostos: ");
	scanf("%f", &porc_imp);
	
	//---------------------------------------------------------------------------------------------------
	
	lucro_distri = calcLucro_Distri(preco_fabr, porc_distri); /*lucro_distri vai receber a FUN��O, dando como par�metro as Variaveis que v�o substituir as Variavies da FUN��O
	                                                            preco_fabr -> p_fabr && porc_distri -> porc_dist */
	
	vlr_imp = calcImposto(preco_fabr, porc_imp); /*vlr_imp vai receber a FUN��O, dando como par�metro as Variaveis que v�o substituir as Variavies da FUN��O
	                                                preco_fabr -> p_fabr && porc_imp -> porc_imposto */
	
	vlr_total = calcValor_Final(preco_fabr, lucro_distri, vlr_imp); /*vlr_total vai receber a FUN��O, dando como par�metro as Variaveis que v�o substituir as Variavies da FUN��O
	                                                                  preco_fabr -> p_fabr && lucro_distri -> valor_distri && vlr_imp -> valor_imp */
	
	//----------------------------------------------------------------------------------------------------
	
	printf("\nLucro do Distribuidor: %.2f", lucro_distri);
	printf("\nValor do Imposto: %.2f", vlr_imp);
	printf("\nValor Final do ve�culo: %.2f", vlr_total);
	
	return 0;
}

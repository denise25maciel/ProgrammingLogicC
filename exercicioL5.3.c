/*
3.	Fa�a um algoritmo que leia um n�mero e divida-o por dois (sucessivamente) at� que o resultado seja menor que 1. 
Mostre o resultado da �ltima divis�o e a quantidade de divis�es efetuadas.
*/
#include <stdio.h>

main(){

	int qtdDiv =0;
	float valor=0;
	int resultado =0;
	
	printf("\n\nDigite um valor:");		
	scanf("%f", &valor);
	
	resultado =1;

	while(valor>=1){
	 		
		valor = valor/2;
		printf("valor: %.2f\n", valor);
		qtdDiv ++;
	}
	printf ("Resultado da ultima divisao %.2f \nQuantidade de divisoes efetuadas %d",valor, qtdDiv);
}


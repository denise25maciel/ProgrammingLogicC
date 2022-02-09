/*
3.	Faça um algoritmo que leia um número e divida-o por dois (sucessivamente) até que o resultado seja menor que 1. 
Mostre o resultado da última divisão e a quantidade de divisões efetuadas.
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


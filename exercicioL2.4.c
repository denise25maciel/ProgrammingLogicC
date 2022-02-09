/*
4.	Escreva um programa que lê um número inteiro. Informe se o número é positivo, negativo ou igual a zero.
*/
#include <stdio.h>

main(){
	int valor;
	printf("Entre com um valor:");
	scanf("%d", &valor);
	if (valor>0)
		printf("Numero positivo");
	else if(valor==0)
		printf("Numero igual a zero");
	else
		printf("Numero negativo");
	
}


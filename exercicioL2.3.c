/*
3.	Escreva um programa que lê um número inteiro. Informe se o número é positivo ou negativo. 
*/
#include <stdio.h>

main(){
	int valor;
	printf("Entre com um valor:");
	scanf("%d", &valor);
	if (valor>=0)
		printf("Numero positivo");
	else
		printf("Numero negativo");
	
}


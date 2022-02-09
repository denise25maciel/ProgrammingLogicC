/*
8.	Escreva um programa que lê um número inteiro. Informe se o mesmo é par ou impar, positivo ou negativo.
*/
#include <stdio.h>

main(){
	int valor1, valor2;
	printf("Entre com o valor 1:");
	scanf("%d", &valor1);

	
	if (valor1>=0)
		printf("Numero positivo\n");
	else
		printf("Numero negativo\n");
		
		
	if (valor1%2==0)
		printf("Numero par");
	else
		printf("Numero impar");
	
}


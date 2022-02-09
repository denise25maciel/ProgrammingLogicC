/*
5.	Escreva um programa que lê um número inteiro. Informe se o número é maior ou igual a 10 ou se é menor do que 10. 
*/
#include <stdio.h>

main(){
	int valor;
	printf("Entre com um valor:");
	scanf("%d", &valor);
	if (valor>=10)
		printf("Numero maior ou igual a 10");
	else
		printf("Numero menor que 10");
	
}


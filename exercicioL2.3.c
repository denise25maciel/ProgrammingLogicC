/*
3.	Escreva um programa que l� um n�mero inteiro. Informe se o n�mero � positivo ou negativo. 
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


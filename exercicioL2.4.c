/*
4.	Escreva um programa que l� um n�mero inteiro. Informe se o n�mero � positivo, negativo ou igual a zero.
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


/*
6.	Escreva um programa que l� um n�mero real. Informe se o n�mero � maior ou igual a 100, se est� entre 51 e 99 ou se � menor ou igual a 50 
*/
#include <stdio.h>

main(){
	float valor;
	printf("Entre com um valor:");
	scanf("%f", &valor);
	if (valor>=100)
		printf("Numero maior ou igual a 100");
	else if (valor>=51)
		printf("Numero entre 51 e 100");
	else
		printf("Numero menor ou igual a 50");
	
}


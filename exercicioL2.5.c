/*
5.	Escreva um programa que l� um n�mero inteiro. Informe se o n�mero � maior ou igual a 10 ou se � menor do que 10. 
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


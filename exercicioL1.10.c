/*
10.	Escreva um programa que receba um n�mero x e informe o resultado de sua divis�o por 2
*/
#include <stdio.h>
#define PI 3.14

main(){
	
	int valor, resultado;
	printf ("Insira um valor\n");
	scanf("%d", &valor);
	
	resultado = valor%2;
	printf ("O resultado da divisao de %d por 2 e: %d\n", valor, resultado);


}


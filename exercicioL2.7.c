/*
7.	Escreva um programa que leia dois n�meros inteiros. Se o primeiro E o segundo valor forem positivos imprima "POSITIVO";
se o primeiro E o segundo valor forem negativos imprima "NEGATIVO", caso contr�rio imprima "POSITIVO E NEGATIVO" 
*/
#include <stdio.h>

main(){
	int valor1, valor2;
	printf("Entre com o valor 1:");
	scanf("%d", &valor1);
	printf("Entre com o valor 2:");
	scanf("%d", &valor2);
	
	if ((valor1>=0)&&(valor2>=0))
		printf("POSITIVO");
	else if ((valor1<0)&&(valor2<0))
		printf("NEGATIVO");
	else
		printf("POSITIVO E NEGATIVO");
	
}


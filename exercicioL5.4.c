/*
4.	Utilizando WHILE escreva um programa que receba um inteiro e calcule seu fatorial.
*/
#include <stdio.h>

main(){

	int valor=0;
	int fatorial =1;

	printf("Digite um valor:\n");
	scanf("%d", &valor);
	
	while(valor>0){
		fatorial = fatorial*valor;
		valor--;
	}
	printf ("Fatorial: %d",fatorial);
}


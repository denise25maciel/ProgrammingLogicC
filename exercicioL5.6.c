/*
6.	Utilizando FOR fa�a um algoritmo que leia um conjunto x elementos,
sendo x informado pelo usu�rio, e imprima sua soma e m�dia 
*/
#include <stdio.h>

main(){

	int elemento=0;
	int soma =0;
	int media = 0;

	printf("Digite o numero de elementos do conjunto:\n");
	scanf("%d", &elemento);
	int i = elemento;
	for (i=0;i<=elemento;i++){
		soma = soma + i;
	}		
	printf ("Soma dos dados: %d\n",soma);
	printf ("Media dos dados: %d\n",soma/elemento);
}






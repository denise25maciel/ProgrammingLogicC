/*
5.	Utilizando WHILE fa�a um algoritmo que leia um conjunto x elementos,
sendo x informado pelo usu�rio, e imprima sua soma e m�dia. 
*/
#include <stdio.h>

main(){

	int elemento=0;
	int soma =0;
	int media = 0;
	
	printf("Digite o numero de elementos do conjunto:\n");
	scanf("%d", &elemento);
	int i = elemento;
	while(i>0){
		soma = soma + i;
		i--;
	}
	printf ("Soma dos dados: %d\n",soma);
	printf ("Media dos dados: %d\n",soma/elemento);
}








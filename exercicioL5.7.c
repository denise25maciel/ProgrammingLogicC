/*
7.	Escreva um algoritmo que leia o n�mero de elementos de uma progress�o aritm�tica (PA), 
o primeiro termo dessa progress�o e a raz�o da progress�o. 
Utilizando WHILE e escreva os n termos desta progress�o, bem como a soma dos elementos.
*/
#include <stdio.h>

main(){
	int termoAtual=0;
	int elemento=0;
	int termo1 =0;
	int razao = 0;
	int soma=0;

	printf("Digite a quantidade de elementos da PA \n");
	scanf("%d", &elemento);
	printf("Digite ao primeiro termo \n");
	scanf("%d", &termo1);
	printf("Digite a razao da PA\n");
	scanf("%d", &razao);
	
	termoAtual = termo1;
	printf("Impressao da PA\n");
	
	while (elemento>0){
		printf ("[%d]", termoAtual);
		soma = soma +termoAtual;
		termoAtual = termoAtual+razao;
		elemento --;
	}
	printf("\nSoma dos termos: %d", soma);
}






#include<stdio.h>
#include <stdlib.h>

/*
10.	Faça um algoritmo que leia uma matriz   quadrada de ordem 5 e imprima na tela a soma dos elementos abaixo da diagonal principal da matriz.
OBS: elementos abaixo da diagonal principal sempre tem o número da linha maior que o número da coluna.

*/
main(){
	int matriz[5][5];
	int j,k, soma;
	
	for (j=0;j<5;j++){
		for(k=0;k<5;k++){
			matriz[j][k] = rand()%5;
		}
	}

	printf("\nImpressao da matrizA:\n");
	for (j=0;j<5;j++){
		for(k=0;k<5;k++){
			printf("[%2d]", matriz[j][k]);
		}
		printf("\n");
	}

	printf("\nElementos:\n");
	for (j=0;j<5;j++){
		for(k=0;k<5;k++){
			if (j>k){
				//printf("[%2d]", matriz[j][k]); // usado para teste, mostra os elementos abaixo da diagonal principal
				soma = soma + matriz[j][k];
			}
		}
	}
	printf("\n\nSoma dos elementos abaixo da diagonal principal:%d", soma);
}

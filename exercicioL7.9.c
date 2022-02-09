#include<stdio.h>
#include <stdlib.h>

/*
9.	Faça um algoritmo para somar duas matrizes.
*/
main(){
	int matrizA[5][5], matrizB[5][5], matrizSoma[5][5];
	int j,k,  posicaoJ, posicaoK;
	
	for (j=0;j<5;j++){
		for(k=0;k<5;k++){
			matrizA[j][k] = rand()%5;
		}
	}
	for (j=0;j<5;j++){
		for(k=0;k<5;k++){
			matrizB[j][k] = rand()%5;
		}
	}
	
	printf("\nImpressao da matrizA:\n");
	for (j=0;j<5;j++){
		for(k=0;k<5;k++){
			printf("[%2d]", matrizA[j][k]);
		}
		printf("\n");
	}
	printf("\nImpressao da matrizB:\n");
	for (j=0;j<5;j++){
		for(k=0;k<5;k++){
			printf("[%2d]", matrizB[j][k]);
		}
		printf("\n");
	}
	
	//soma matriz A e B
	for (j=0;j<5;j++){
		for(k=0;k<5;k++){
				matrizSoma[j][k] = matrizA[j][k] + matrizB[j][k];	
		}
	}
	printf("\nImpressao SOMA:\n");
	for (j=0;j<5;j++){
		for(k=0;k<5;k++){
			printf("[%2d]", matrizSoma[j][k]);
		}
		printf("\n");
	}
}

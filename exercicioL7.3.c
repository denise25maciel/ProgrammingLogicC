#include<stdio.h>
#include <stdlib.h>
#define TAM 5
/*
3.	Dada uma matriz quadrada de ordem 5, separar os elementos da diagonal principal em um vetor.
OBS: diagonal principal é composta por elementos em que o índice da linha é igual ao índice da coluna.

.
*/
main(){
	int matriz[TAM][TAM];
	int vetor[TAM];
	int valor,j=0 ,k=0 , i=0;
	
	for (j=0;j<TAM;j++){
		for(k=0;k<TAM;k++){
			matriz[j][k] = rand() % 100;
		}
	}

	printf("Impressao da matriz:\n\n");
	for (j=0;j<TAM;j++){
		for(k=0;k<TAM;k++){
			printf("[%2d]", matriz[j][k]);
		}
		printf("\n");
	}
	//insercao dos elementos da diagonal principal no vetor
	for (j=0;j<TAM;j++){
		for(k=0;k<TAM;k++){
			if (j==k){
				vetor[i] = matriz[j][k];
				i++;
			}		
		}
	}
	//impressao do vetor
	printf("\nDiagonal principal:\n");
	for(i=0;i<TAM;i++){
		printf("[%d]",vetor[i]);	 	
	}
}

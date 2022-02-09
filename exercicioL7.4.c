#include<stdio.h>
#include <stdlib.h>
#define TAM 5
/*
4. Dada uma matriz quadrada de ordem 5, separar os elementos da diagonal secundária em um vetor.
OBS: diagonal secundária é composta por elementos em que a soma de i com j sempre resulta em uma mesma solução
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
	valor = TAM+1;//soma da diagonal segundária (ultimo item da primeira linha)
	
	printf("Impressao da matriz:\n\n");
	
	for (j=0;j<TAM;j++){
		for(k=0;k<TAM;k++){
			printf("[%2d]", matriz[j][k]);
		}
		printf("\n");
	}
	//insercao dos elementos da diagonal secundária no vetor
	for (j=0;j<TAM;j++){
		for(k=0;k<TAM;k++){
			if (((j+1)+(k+1)) == valor){
				vetor[i] = matriz[j][k];
				i++;
			}		
		}
	}
	
	//impressao do vetor
	printf("\nDiagonal secundaria:\n");
	for(i=0;i<TAM;i++){
		printf("[%d]",vetor[i]);	 	
	}
}

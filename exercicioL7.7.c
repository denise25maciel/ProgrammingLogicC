#include<stdio.h>
#include <stdlib.h>
#define TAM 10
/*
7.	Fa�a um programa que preenche uma matriz 10x10 com o produto dos �ndices de cada posi��o.
*/
main(){
	int matriz[TAM][TAM];
	int j,k;
	
	for (j=0;j<TAM;j++){
		for(k=0;k<TAM;k++){
			matriz[j][k] = j*k;
		}
	}
	
	printf("\nImpressao da matriz:\n\n");
	for (j=0;j<TAM;j++){
		for(k=0;k<TAM;k++){
			printf("[%2d]", matriz[j][k]);
		}
		printf("\n");
	}
}

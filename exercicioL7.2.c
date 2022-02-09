#include<stdio.h>
#include <stdlib.h>
#define TAM 5
/*
2.	Faça um algoritmo que peça ao usuário a ordem de uma matriz. 
Preencha os mesmos com valores entre 0 e 100 (utilizar função rand).
*/
main(){
	int matriz[TAM][TAM];
	int j,k;
	
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
}

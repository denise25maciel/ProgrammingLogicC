#include<stdio.h>
#include <stdlib.h>

/*
8.	Encontrar o maior elemento e a sua respectiva posição de uma matriz B de dimensão 7x5.
*/
main(){
	int matriz[7][5];
	int j,k, maior, posicaoJ, posicaoK;
	
	for (j=0;j<7;j++){
		for(k=0;k<5;k++){
			matriz[j][k] = rand()%30;
		}
	}
	
	printf("\nImpressao da matriz:\n\n");
	for (j=0;j<7;j++){
		for(k=0;k<5;k++){
			printf("[%2d]", matriz[j][k]);
		}
		printf("\n");
	}
	
	printf("Maior elemento da matriz:");
	maior = matriz[0][0];
	for (j=0;j<7;j++){
		for(k=0;k<5;k++){
			if(matriz[j][k]>maior){
				maior = matriz[j][k];
				posicaoJ = j;
				posicaoK = k;
			}
				
		}
	}
	printf(" %d - posicao[%d][%d]", maior, posicaoJ, posicaoK);
}

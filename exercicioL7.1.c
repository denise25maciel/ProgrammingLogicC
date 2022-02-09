#include<stdio.h>
#define TAM 3
/*
1.	Faça um algoritmo que preencha os dados de uma matriz quadrada de ordem 3 com valores digitados pelo usuário.
*/
main(){
	int matriz[TAM][TAM];
	int j,k;
	printf("Entre com os valores de cada posicao da matriz\n");
	for (j=0;j<3;j++){//linha 0
		for(k=0;k<3;k++){//coluno 1
			printf("hello word");
			sleep(1);
		}
		
		printf("\n");
	}
	for (j=0;j<3;j++){//linha 0
		for(k=0;k<3;k++){//coluno 1
			printf("Posicao: [%d][%d]:",j,k);
			scanf("%d", &matriz[j][k]);
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

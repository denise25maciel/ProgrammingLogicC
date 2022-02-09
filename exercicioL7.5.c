#include<stdio.h>
#include <stdlib.h>

/*
5.	Achar a somatória de cada uma das linhas de uma matriz A (7x5).
*/
main(){
	int matriz[7][5];
	int somatorio;
	int valor,j=0 ,k=0 , i=0;
	
	//inserindo dados na matriz
	for (j=0;j<7;j++){
		for(k=0;k<5;k++){
			matriz[j][k] = rand() % 2;
		}
	}
	
	printf("Impressao da matriz:\n\n");
	
	for (j=0;j<7;j++){
		for(k=0;k<5;k++){
			printf("[%2d]", matriz[j][k]);
		}
		printf("\n");
	}
	printf("\n");
	
	for (j=0;j<7;j++){
		somatorio = 0;
		for(k=0;k<5;k++){
			somatorio = somatorio + matriz[j][k];
		}
		printf("Somatoria linha %d : %d\n",j+1,somatorio);
	}
}

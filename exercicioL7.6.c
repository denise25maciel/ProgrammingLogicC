/* 6.	Achar a somatória de cada uma das colunas de uma matriz A (7x5). */

#include <stdio.h>
#include <stdlib.h>

 main(){
	int matriz[7][5];
	int somatorio;
	int valor,j=0 ,k=0 , i=0;
	
	//inserindo dados na matriz
	for (j=0;j<7;j++){
		for(k=0;k<5;k++){
			matriz[j][k] = rand() % 5;
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
	
	for (k = 0; k < 5; k++) {
		somatorio = 0;
		for (j = 0; j < 7; j++){
		    somatorio = somatorio + matriz[j] [k];
		}
		printf("Somatorio coluna %d : %d\n",k+1,somatorio);
	}
	

	       
	

}

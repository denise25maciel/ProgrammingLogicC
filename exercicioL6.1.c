/*
1.	Faça um programa que receba 10 valores inteiros digitados pelo usuário e os armazene em um vetor. 
Sequencialmente faça a impressão desses valores.
*/
#include <stdio.h>

main(){
	int vetor[10];
	int i;
	for (i=0;i<10;i++){
		printf("Entre com o %d valor:", i);
		scanf("%d", &vetor[i]);
	}
	system("cls");
	printf("Impressao do vetor\n");
	for (i=0;i<10;i++){
		printf("[%d]", vetor[i]);
		
	}
}


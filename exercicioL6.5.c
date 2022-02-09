/*
5.	Faça um programa que leia dois vetores A e B contendo, cada um, 10 elementos inteiros. 
Intercale estes dois conjuntos (A[1] - B[1] - A[2] - B[2]) formando um novo vetor de 20 elementos. Imprima o novo vetor.
*/

#include<stdio.h>
#define TAM 10
main()
{
    int vetorA[TAM], vetorB[TAM] , vetorC[20], i=0, j=0;
	//preenche dados no vetor A e vetor B
    for (j=0;j<2;j++){
    	for (i=0;i<TAM;i++){
    		printf("Vetor %d Posicao [%d] :",j+1, i+1);
    		if(j==0)
    			scanf("%d", &vetorA[i]);
			else
				scanf("%d", &vetorB[i]);
		}
	}
	
	//gera vetor intercalado
	for (i=0;i<TAM;i++){
		vetorC[2*i] = vetorA[i];
		vetorC[2*i+1] = vetorB[i];
	}
	
	//imprime vetor intercalado
    for (i=0;i<20;i++)
    	printf("[%d]", vetorC[i] );
}






/*
3.	Dado um vetor com 10 elementos inteiros, substituir cada elemento por ele mesmo multiplicado 
pela posição do elemento no conjunto,  para i = 0,1,2...10. 
*/

#include<stdio.h>
#define TAM 10

main()
{
	int vet[TAM], i=0;
	while(i<TAM) {
		printf("Digite um valor inteiro para a posicao %d do vetor", i+1);
		scanf("%d", &vet[i]);
		i++;
	}
	
	i=0;
	while(i<TAM) {
		vet[i]=vet[i]*i;
		printf("%d-", vet[i]);
		i++;
	}
	printf("\n");
}




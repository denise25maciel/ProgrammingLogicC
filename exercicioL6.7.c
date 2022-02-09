/*
7.	Armazenar 10 valores inteiros num vetor de 10 posições. 
Sequencialmente, imprima-os em ordem inversa multiplicados por 2. 
*/

#include<stdio.h>;
#define TAM 10

main()
{
    int vetor[TAM];
    int i;
	//gera vetor intercalado
	for (i=0;i<TAM;i++){
		printf("Digite o valor %d:",i+1);
		scanf("%d",&vetor[i]);
	}
	for (i=TAM;i>0;i--)
		printf("[%d]",i*2);
}

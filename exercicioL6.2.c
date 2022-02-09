/*
2.	Armazenar 10 valores inteiros num vetor de 10 posições. 
Após, leia o vetor e mostre os valores armazenados, adicionando em 10 unidades quando forem números pares 
*/
#include <stdio.h>
#define tam 10

main()
{
    int vetor[tam], cont;
	//preencher
	for(cont=0; cont<tam; cont++)
    {
        printf("Digite um valor inteiro para a posicao%d:", cont+1);
        scanf("%d", &vetor[cont]);
        if (vetor[cont] % 2==0)
            vetor[cont]=vetor[cont]+tam;
    }
	//imprimir
	printf("\n");
    for(cont=0; cont<tam; cont++)
        printf("%d ", vetor[cont]);
}

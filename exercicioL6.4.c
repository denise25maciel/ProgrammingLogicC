/*
4.	Escreva a fun��o que recebe 3 argumentos: o primeiro argumento � um vetor de inteiros e o segundo argumento � um n�mero.
A fun��o deve retornar quantas vezes o n�mero ocorre dentro do vetor. 
O tamanho m�ximo da matriz deve ser definido por meio de constantes.
*/

#include<stdio.h>
#define TAM 10
main()
{
    int vetor[TAM], opcao=0,valorBuscado=0,contador=0, i=0;

    i=0;
	while(i<TAM)
	{
        printf("Digite o valor inteiro para a posicao %d do vetor:", i+1);
        scanf("%d", &vetor[i]);
        i++;
	}
    printf("Informe o numero a ser buscado:");
    scanf("%d", &valorBuscado);
    //verificar
	for(i=0;i<TAM;i++){
	    if(vetor[i]==valorBuscado)
	        contador++;
	}
	if(contador==0)
	    printf("Numero informado nao encontrado.");
	else
	  	printf("Numero %d foi encontrado %d vezes no vetor.", valorBuscado, contador);
}






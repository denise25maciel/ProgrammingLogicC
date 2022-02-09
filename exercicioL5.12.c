/*
12.	Faça um algoritmo que leia n números inteiros informados pelo usuário, 
sendo n informado pelo usuário. Utilizando WHILE indique a quantidade de números 
pares e a quantidade de números impares.  
*/
#include <stdio.h>

main(){
	int quantidade =0;
	int qPar=0;
	int qImpar=0;
	int valor=0;
	
	printf ("Digite a quantidade de elementos a serem lidos:\n");
	scanf("%d",&quantidade);
		
	while(quantidade>0)	{
		printf("Digite o valor[%d]:", quantidade);
		scanf("%d", &valor);
		if (valor%2 == 0)
			qPar++;
		else
			qImpar++;
		quantidade--;
	}
	printf("\nQuantidade de numeros pares:%d\n", qPar);
	printf("\nQuantidade de numeros impares:%d\n", qImpar);
}






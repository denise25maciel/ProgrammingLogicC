/*
13.	Fa�a um algoritmo que leia n n�meros inteiros informados pelo usu�rio, 
sendo n informado pelo usu�rio. Utilizando FOR indique a quantidade de n�meros 
pares e a quantidade de n�meros impares.  
*/
#include <stdio.h>

main(){
	int quantidade =0;
	int qPar=0;
	int qImpar=0;
	int valor=0;
	int i = 0;
	
	printf ("Digite a quantidade de elementos a serem lidos:\n");
	scanf("%d",&quantidade);
		
		
	for (i=0;i<quantidade;i++){
		printf("Digite o valor[%d]:", i+1);
		scanf("%d", &valor);
		if (valor%2 == 0)
			qPar++;
		else
			qImpar++;
	}
	printf("\nQuantidade de numeros pares:%d\n", qPar);
	printf("\nQuantidade de numeros impares:%d\n", qImpar);
}






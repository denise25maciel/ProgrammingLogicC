/*
14.	Fa�a um algoritmo que leia 2 valores inteiros (X, Y). 
Pedir para que o usu�rio escolha entre ordem crescente, 1, ou decrescente, 2. 
Ordenar conforme solicita��o do usu�rio e imprimir.

*/
#include <stdio.h>

main(){
	int valor1=0, valor2=0, ordem=0, aux=0;
	printf("Entre com o primeiro valor:");
	scanf("%d", &valor1);
	printf("Entre com o segundo valor:");
	scanf("%d", &valor2);
	printf("Escolha entre 1 - ordem crescente  e 2 - ordem decrescente:");
	scanf("%d", &ordem);

	if (ordem == 1){
		//ordem crescente
		if(valor1>valor2){
			aux = valor1;
			valor1 = valor2;
			valor2 = aux;
		}
		printf("Impress�o em ordem crescente: %d - %d", valor1, valor2);
	}else{
		//ordem decrescente
		if(valor1<valor2){
			aux = valor1;
			valor1 = valor2;
			valor2 = aux;
		}
		printf("Impress�o em ordem decrescente: %d - %d", valor1, valor2);
	}
	
}


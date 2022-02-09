/*
6. Faça um algoritmo que leia a primeira letra do estado civil de uma pessoa e mostre uma mensagem com a sua descrição 
(Solteiro, Casado,Viúvo, Divorciado). Mostre uma mensagem de erro, se necessário.

*/

#include <stdio.h>
main(){
	char valor;
	
	printf("Digite a primeira letra do estado civil (Opcoes: S,C,V,D):\n");
	scanf("%c",&valor);
	
	switch (valor){
		case 'S':
			printf("Estado civil - Solteiro");
			break;
		case 'C':
			printf("Estado civil - Casado");
			break;
		case 'V':
			printf("Estado civil - Viuvo");
			break;
		case 'D':
			printf("Estado civil - Divorciado");
			break;
		default:
			printf("opcao invalida");

	}
}

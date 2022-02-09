/*
3.	Construa um programa que receba um inteiro e utilizando ESTRUTURA DE DECISÃO MULTIPLA ESCOLHA 
indique qual o dia da semana correspondente. Sendo 1 para domingo, 2 para segunda, 3 para terça, etc.
*/
#include <stdio.h>
main(){
	
	int valor;
	
	printf("Digite um valor de 1 a 7:\n");
	scanf ("%d", &valor);
	
	switch (valor){
		case 1:
			printf ("Voce escolheu domingo\n");
			break;
		case 2:
			printf ("Voce escolheu segunda\n");
			break;
		case 3:
			printf ("Voce escolheu terca\n");
			break;
		case 4:
			printf ("Voce escolheu quarta\n");
			break;
		case 5:
			printf ("Voce escolheu quinta\n");
			break;
		case 6:
			printf ("Voce escolheu sexta\n");
			break;
		case 7:
			printf ("Voce escolheu sabado\n");
			break;
		default:
			printf ("O valor digitado nao e valido\n");
			break;
	}
}

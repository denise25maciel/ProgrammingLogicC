/*
4.	4.	Fa�a um programa que mostre o menu abaixo para que o usu�rio selecione o tipo de c�lculo que deve ser realizado:
1-Raiz quadrada
2-A metade
3-10% do n�mero
4-O dobro
Atrav�s do uso do CASE receba um n�mero digitado pelo usu�rio, calcule  e informe o resultado da escolha do usu�rio.
*/

#include <stdio.h>
#include <math.h>
main(){
	float valor=0;
	int opcao;

	printf("Escolha uma op��o a ser executada:\n");
	printf("1 - Raiz quadrada:\n");
	printf("2 - Metade:\n");
	printf("3 - 10\% :\n");
	printf("4 - Dobro :\n");
	scanf("%d",&opcao);
	printf("Digite um valor para o calculo");
	scanf("%f",&valor);

	
	switch(opcao){
		case 1:
			printf("Raiz quadrada de %.2f e %.2f", valor, sqrt(valor));
			break;
		case 2:
			printf("Metade de %.2f e %.2f", valor, valor/2);
			break;
		case 3:
			printf("10 %c por cento de %.2f e %.2f",37, valor, valor*0.10);
			break;
		case 4 :
			printf("Dobro de %.2f e %.2f", valor, valor*2);
			break;
		default:
			printf("O valor digitado nao e valido\n");
	}
	
	
}

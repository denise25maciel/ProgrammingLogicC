/*
5.	Faça um programa que leia dois números reais e em seguida mostre: a soma, o produto, a divisão e a subtração entre eles.
*/
#include <stdio.h>

main(){
	float valor1, valor2, resultadoSoma, resultadoSubtracao, resultadoProduto, resultadoDivisao;
	printf ("Digite o primeiro valor\n");
	scanf("%f", &valor1);
	printf ("Digite o segundo valor\n");
	scanf("%f", &valor2);
	
	resultadoSoma = valor1+valor2;
	resultadoSubtracao = valor1-valor2;
	resultadoProduto = valor1*valor2;
	resultadoDivisao = valor1/valor2;
	
	printf("O resultado da soma e %.2f\n", resultadoSoma);
	printf("O resultado da subtracao e %.2f\n", resultadoSubtracao);
	printf("O resultado do produto e %.2f\n", resultadoProduto);
	printf("O resultado da divisao e %.2f\n", resultadoDivisao);
}


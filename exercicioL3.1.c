/*
1.	Escreva um programa que solicita que o usuário digite um operador matemático, sendo +, -,* e / as opções, e dois números inteiros. 
A partir do comando IF ELSE realizar a operação escolhida e informar ao usuário.
*/
#include <stdio.h>

main(){
	char operador = ' ';z
	float valor1, valor2;
	printf("Entre com um tipo de operacao a ser realizada (+,-,*,/), o primeiro valor e o segundo valor\n");
	scanf("%c %f %f", &operador, &valor1, &valor2);
	if (operador == '+'){
		printf("Resultado da soma %.2f", valor1+valor2);
	}
	else if (operador =='-'){
		printf("Resultado da subtracao %.2f", valor1-valor2);
	}
	else if (operador =='*'){
		printf("Resultado da multiplicacao %.2f", valor1*valor2);
	}
	else{
		printf("Resultado da divisao %.2f", valor1/valor2);
	}

	printf("\n\n");
	system ("pause");
}


/*
2.	Escreva um programa que solicita que o usu�rio digite um operador matem�tico, sendo +, -,* e / as op��es, e dois n�meros inteiros.
 A partir do comando CASE realizar a opera��o escolhida e informar ao usu�rio.
*/
#include <stdio.h>

main(){
	char operador = ' ';
	float valor1, valor2;
	printf("Entre com um tipo de operacao a ser realizada (+,-,*,/)\n");
	scanf("%c", &operador);
	printf("Entre com o primeiro valor:\n");
	scanf("%f", &valor1);
	printf("Entre com o segundo valor:\n");
	scanf("%f", &valor2);
	
	switch (operador){
		case '+':
			printf("Resultado da soma %.2f", valor1+valor2);
			break;
		case '-':
			printf("Resultado da subtracao %.2f", valor1-valor2);
			break;
		case '*':
			printf("Resultado da multiplicacao %.2f", valor1*valor2);
			break;
		case '/':
			printf("Resultado da divisao %.2f", valor1/valor2);
			break;
	
	}
	printf("\n\n");
	system ("pause");
}


/*
3.	Fa�a um programa que leia dois n�meros reais e atrav�s de FUN��O imprima e calcule: 
a soma, o produto, a divis�o e a subtra��o entre eles. 
Cada opera��o matem�tica deve ser realizada por uma FUN��O (L1.5).
*/
#include <stdio.h>
int multiplicar(int valor1, int valor2){
	int resultado;
	resultado = valor1*valor2;
	return resultado;
}

int somar(int valor1, int valor2){
	int resultado;
	resultado = valor1+valor2;
	return resultado;
	
}

int subtrair(int valor1, int valor2){
	int resultado;
	resultado = valor1-valor2;
	return resultado;
}

int dividir(int valor1, int valor2){
	int resultado;
	return resultado;
}

main(){
	int valor1, valor2, retornoMult, retornoSoma, retornoSub, retornoDiv;
	printf ("Digite o primeiro valor\n");
	scanf("%d", &valor1);
	printf ("Digite o segundo valor\n");
	scanf("%d", &valor2);
	retornoMult = multiplicar(valor1,valor2);
	retornoSoma = somar(valor1,valor2);
	retornoSub = subtrair(valor1,valor2);
	retornoDiv - dividir(valor1,valor2);
	
	printf("O valor da multiplicacao e %d\n", retornoMult);
	printf("O valor da soma e %d\n", retornoSoma);
	printf("O valor da subtracao e %d\n", retornoSub);
	printf("O valor da divisao e %d\n", retornoDiv);
}

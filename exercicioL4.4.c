/*
3.	Faça um programa que leia dois números reais e através de FUNÇÃO imprima e calcule: 
a soma, o produto, a divisão e a subtração entre eles. 
Cada operação matemática deve ser realizada por uma FUNÇÃO (L1.5).
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

/*
3.	Fa�a um programa que leia dois n�meros reais e atrav�s de FUN��O imprima e calcule: 
a soma, o produto, a divis�o e a subtra��o entre eles. 
Cada opera��o matem�tica deve ser realizada por uma FUN��O (L1.5).
*/
#include <stdio.h>
multiplicar(int valor1, int valor2){
	int resultado;
	resultado = valor1*valor2;
	printf("O valor da multiplicacao e %d\n", resultado);
}
somar(int valor1, int valor2){
	int resultado;
	resultado = valor1+valor2;
	printf("O valor da soma e %d\n", resultado);
}
subtrair(int valor1, int valor2){
	int resultado;
	resultado = valor1-valor2;
	printf("O valor da subtracao e %d\n", resultado);
}
dividir(int valor1, int valor2){
	int resultado;
	resultado = valor1/valor2;
	printf("O valor da divisao e %d\n", resultado);
}

main(){
	int valor1, valor2, retorno;
	printf ("Digite o primeiro valor\n");
	scanf("%d", &valor1);
	printf ("Digite o segundo valor\n");
	scanf("%d", &valor2);
	multiplicar(valor1,valor2);
	somar(valor1,valor2);
	subtrair(valor1,valor2);
	dividir(valor1,valor2);
}

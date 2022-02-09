/*
3.	Faça um programa que leia dois números reais e através de FUNÇÃO imprima e calcule: 
a soma, o produto, a divisão e a subtração entre eles. 
Cada operação matemática deve ser realizada por uma FUNÇÃO (L1.5).
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

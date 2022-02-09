/*
4.	Faça um programa para ler dois valores (x e y), calcular x multiplicado por y e imprimir o resultado
*/
#include <stdio.h>

main(){
	float valor1, valor2, resultado;
	printf ("Digite o primeiro valor\n");
	scanf("%f", &valor1);
	printf ("Digite o segundo valor\n");
	scanf("%f", &valor2);
	
	resultado = valor1*valor2;
	
	printf("A media das duas notas e %.2f", resultado);
}


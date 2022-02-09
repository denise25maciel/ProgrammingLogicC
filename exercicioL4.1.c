/*
1.	Faça um programa para ler dois valores (x e y), através de FUNÇÃO calcular x multiplicado por y e imprimir o resultado (L1.4).
*/
#include <stdio.h>
multiplicar(int valor1, int valor2){
	int resultado;
	resultado = valor1*valor2;
	printf("O valor da multiplicacao e %d", resultado);
}

main(){
	float valor1, valor2, resultado;
	printf ("Digite o primeiro valor\n");
	scanf("%f", &valor1);
	printf ("Digite o segundo valor\n");
	scanf("%f", &valor2);
	multiplicar(valor1, valor2);
}


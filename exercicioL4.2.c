/*
2.	Faça um programa para ler dois valores (x e y). Através de FUNÇÃO calcular x multiplicado por y. Imprimir o resultado FORA DA FUNÇÃO (L1.4).
*/
#include <stdio.h>
int multiplicar(int valor1, int valor2){
	int resultado;
	resultado = valor1*valor2;
	return resultado;
}

main(){
	int valor1, valor2, retorno;
	printf ("Digite o primeiro valor\n");
	scanf("%d", &valor1);
	printf ("Digite o segundo valor\n");
	scanf("%d", &valor2);
	retorno = multiplicar(valor1, valor2);
	printf("O valor da multiplicacao e %d",retorno); 
}


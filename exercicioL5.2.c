/*
2.	Elabore um programa que receba um valor x e um valor n digitados pelo usuário (considere x e n inteiros).  Utilizando WHILE calcular x^n.
*/
#include <stdio.h>

main(){
	int termos=0;
	int valorX=0;
	int valorY=0;
	int resultado =1;
	

	printf("\nEntre com o valor de x:");
	scanf("%d", &valorX);
		
	printf("\nEntre com o valor de y:");
	scanf("%d", &valorY);
	resultado =1;
	while(valorY>0){
		resultado = resultado *valorX;
		valorY--;
	}
	printf ("\nResultado %d\n", resultado);
}


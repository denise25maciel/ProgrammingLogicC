/*
8.	Sabendo que a �rea de um tri�ngulo � a medida da sua base multiplicada pela medida de sua altura dividida por dois (�rea = (b*h)/2). 
Escreva um programa que pe�a os valores da base e da altura e forne�a a �rea do tri�ngulo.
*/
#include <stdio.h>

main(){
	
	float base, altura, area;
	printf ("Digite o valor da base\n");
	scanf("%f", &base);
	printf ("Digite o valor da altura\n");
	scanf("%f", &altura);

	area =  (base*altura)/2;
	printf("A area e: %.2f", area);

}


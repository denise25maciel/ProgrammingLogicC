/*
8.	Sabendo que a área de um triângulo é a medida da sua base multiplicada pela medida de sua altura dividida por dois (Área = (b*h)/2). 
Escreva um programa que peça os valores da base e da altura e forneça a área do triângulo.
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


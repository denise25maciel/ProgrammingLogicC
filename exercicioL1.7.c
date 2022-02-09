/*
7.	Elaborar um programa que calcule e apresente o volume de uma caixa retangular, valores devem informados pelo usuário.
Volume = Comprimento * Largura * Altura
*/
#include <stdio.h>

main(){
	
	float comprimento, largura, altura, volume;
	printf ("Digite o valor do comprimento\n");
	scanf("%f", &comprimento);
	printf ("Digite o valor da largura\n");
	scanf("%f", &largura);
	printf ("Digite o valor da altura\n");
	scanf("%f", &altura);
	
	volume =  (comprimento*largura*altura);
	printf("O volume e: %.2f", volume);

}


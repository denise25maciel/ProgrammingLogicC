/*
9.	Faça um programa para ler dois valores (altura e raio de um cilindro), calcular e mostrar o volume e área. (A = PI *r2) (V = PI * r2* h).
*/
#include <stdio.h>
#define PI 3.14

main(){
	
	float raio, altura, area, volume;
	printf ("Digite o valor do raio\n");
	scanf("%f", &raio);
	printf ("Digite o valor da altura\n");
	scanf("%f", &altura);

	area = PI * raio* raio;
	volume = PI * raio * raio * altura;

	printf("\nA area e: %.2f", area);
	printf("\nO volume e: %.2f", volume);

}


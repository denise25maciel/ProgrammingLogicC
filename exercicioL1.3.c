/*
3.	Escreva um programa para ler, calcular e escrever a m�dia aritm�tica entre dois n�meros
*/
#include <stdio.h>

main(){
	float nota1, nota2, media;
	printf ("Digite o primeiro valor\n");
	scanf("%f", &nota1);
	printf ("Digite o segundo valor\n");
	scanf("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	printf("A media das duas notas e %.2f", media);
}


/*
11.	Fazer um programa que calcule e escreva o valor de S= 1/3 +3/2+5/3+7/4...+99/50  
*/
#include <stdio.h>

main(){
	int soma =0;
	int x=1;
	int y=1;
		
	while  (y<=50){
		
		soma = soma + (x/y);
		printf("[%d/%d]\n", x,y);
		x = x+2;
		y = y+1;
	}
	printf("Soma: %d\n", soma);
}






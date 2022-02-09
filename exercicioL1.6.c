/*
6.	Faça um programa no qual o usuário fornece os valores de temperatura em Fahrenheit 
e o mesmo converte os valores para Celsius Apresente o resultado. (C=(F-32)/1,8).
*/
#include <stdio.h>

main(){
	
	float temperaturaF, temperaturaC;
	printf ("Digite o valor da temperatura em Fahrenheit\n");
	scanf("%f", &temperaturaF);
	
	temperaturaC =  ((temperaturaF-32)/1.8);
	printf("O valor de %.2f F. em Celsius e:%.2f", temperaturaF, temperaturaC);

}


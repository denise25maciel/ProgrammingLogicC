/*
14.	Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada m2 deve-se usar 18W de potência.
Faça um programa que recebe as duas dimensões de um cômodo (em metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser usada.
*/
#include <stdio.h>
#define PI 3.14

main(){
	float dimensao1, dimensao2, resultado;
	
	printf ("Insira a dimensao 1:\n");
	scanf("%f", &dimensao1);
	printf ("Insira a dimensao 2:\n");
	scanf("%f", &dimensao2);
	
	resultado = (dimensao1 *dimensao2) * 18;
	printf ("Para iluminar a area e necessario %.2f W de potencia\n", resultado);



}


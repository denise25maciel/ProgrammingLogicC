/*
14.	Sabe-se que para iluminar de maneira correta os c�modos de uma casa, para cada m2 deve-se usar 18W de pot�ncia.
Fa�a um programa que recebe as duas dimens�es de um c�modo (em metros), calcule e mostre a sua �rea (em m2) e a pot�ncia de ilumina��o que dever� ser usada.
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


/*
16.	Escreva um programa que leia dois n�meros que dever�o ser colocados, respectivamente, nas vari�veis vA e vB. 
O programa deve, ent�o, trocar os valores de VA por VB e vice-versa e mostrar o conte�do destas vari�veis.
*/
#include <stdio.h>
#define PI 3.14

main(){
	int vA, vB, aux;
	float  horasTrab, valorHora, salario;
	
	printf ("Insira o valor da variavel A:\n");
	scanf("%d", &vA);
	printf ("Insira o valor da variavel B:\n");
	scanf("%d", &vB);
	
	aux = vA;
	vA = vB;
	vB = aux;
	
	printf ("Variavel A:%d\n", vA);
	printf ("Variavel B:%d\n", vB);
	
}


/*
15.	Fa�a um programa que leia o n�mero do funcion�rio, o n�mero de horas trabalhadas mensais, 
o valor que recebe por hora e o n�mero de filhos com idade menor de 14 anos. 
Calcular e escrever o sal�rio deste funcion�rio, sendo que cada filho menor de 14 anos acrescenta 10% do sal�rio.
*/
#include <stdio.h>
#define PI 3.14

main(){
	int idFunc, numFilho;
	float  horasTrab, valorHora, salario;
	
	printf ("Insira o Id do funcionario:\n");
	scanf("%f", &idFunc);
	printf ("Insira o numero de horas trabalhadas:\n");
	scanf("%f", &horasTrab);
	printf ("Insira valor da hora:\n");
	scanf("%f", &valorHora);
	printf ("Insira o numero de filhos:\n");
	scanf("%d", &numFilho);
	
	salario = (horasTrab *valorHora) +(horasTrab *valorHora) * (numFilho*0.10);
	printf ("\n\nSalario:%f", salario);



}


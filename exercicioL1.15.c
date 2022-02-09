/*
15.	Faça um programa que leia o número do funcionário, o número de horas trabalhadas mensais, 
o valor que recebe por hora e o número de filhos com idade menor de 14 anos. 
Calcular e escrever o salário deste funcionário, sendo que cada filho menor de 14 anos acrescenta 10% do salário.
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


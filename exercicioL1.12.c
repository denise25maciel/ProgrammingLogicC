/*
12.	Sabendo que o salário total do vendedor é o seu salário fixo + percentual sobre as vendas: escreva um programa que lê o Id do vendedor, 
o salário fixo, o valor das vendas por ele efetuadas e o percentual que ganha sobre essas vendas. Imprimir o Id do vendedor e o salário total
*/
#include <stdio.h>
#define PI 3.14

main(){
	int id;
	float salarioFixo, valorVendas, percentual, salarioTotal;
	printf ("Insira o ID do vendedor\n");
	scanf("%d", &id);
	printf ("Insira o salario fixo \n");
	scanf("%f", &salarioFixo);
	printf ("Insira o valor de vendas\n");
	scanf("%f", &valorVendas);
	printf("Insira o percentual de comissao atribuido as vendas\n");
	scanf("%f", &percentual);
	
	salarioTotal = salarioFixo + (valorVendas*percentual);
	
	printf("\n\nO funcionario %d recebeu como salario %.2f", id, salarioTotal);


}


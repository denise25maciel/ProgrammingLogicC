/*
9.	Certa empresa de transporte fornece um servi�o que custa R$ 100,00. Para idosos (idade acima de 65)
OU para crian�as (idade abaixo de 18) a empresa oferece desconto de R$ 20 neste servi�o. 
Pe�a para que o usu�rio informe sua idade e, se poss�vel, calcule e aplique o desconto. 
Imprima o valor a ser pago pela passagem, se foi poss�vel aplicar o desconto e qual o valor do mesmo.
*/
#include <stdio.h>

main(){
	int idade = 0;
	float passagem = 100;
	printf("Entre com a idade:");
	scanf("%d", &idade);
	
	if ((idade>65)||(idade<18))
		passagem = passagem - 20;

	printf("O valor da passagem %.2f \n", passagem);
	
}


/*
5. Fa�a um programa que receba o valor da venda, escolha a condi��o de pagamento no menu e mostre o total da venda final conforme condi��es a seguir:
1 - Venda a Vista - desconto de 10%
2 - Venda a Prazo 30 dias - desconto de 5%
3 - Venda a Prazo 60 dias - mesmo pre�o
4 - Venda a Prazo 90 dias - acr�scimo de 5%
5 - Venda com cart�o de d�bito - desconto de 8%
6 - Venda com cart�o de cr�dito - desconto de 7%. 

*/

#include <stdio.h>
main(){
	float valor=0;
	int opcao;
	printf("Digite o valor da venda:\n");
	scanf("%f",&valor);

	printf("Escolha uma op��o a ser executada:\n");
	printf("1 - Venda a Vista - desconto de 10%c\n",37);
	printf("2 - Venda a Prazo 30 dias - desconto de 5%c\n",37);
	printf("3 - Venda a Prazo 60 dias - mesmo preco\n");
	printf("4 - Venda a Prazo 90 dias - acr�scimo de 5%c\n",37);
	printf("5 - Venda com cart�o de d�bito - desconto de 8%c\n",37);
	printf("6 - Venda com cart�o de cr�dito - desconto de 7%c\n",37);
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			valor = valor - (valor * 0.10);
			break;
		case 2:
			valor = valor - (valor * 0.05);
			break;
		case 4:
			valor = valor + (valor * 0.05);
			break;
		case 5:
			valor = valor - (valor * 0.08);
			break;
		case 6: 
			valor = valor - (valor * 0.07);
			break;
		default:
			printf("opcao invalida");

	}
	printf("O valor pago na compra foi de: %.2f",valor);
}

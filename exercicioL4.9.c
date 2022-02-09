/*
9. 	Fa�a um programa em que o usu�rio informe o valor da venda e a condi��o de pagamento conforme o menu abaixo. Atrav�s de FUN��O e CASE calcule o total da venda conforme condi��o de pagamento escolhida. Imprima o valor total da venda na fun��o MAIN (L3.5):
1 - Venda a Vista - desconto de 10%
2 - Venda a Prazo 30 dias - desconto de 5%
3 - Venda a Prazo 60 dias - mesmo pre�o
4 - Venda a Prazo 90 dias - acr�scimo de 5%
5 - Venda com cart�o de d�bito - desconto de 8%
6 - Venda com cart�o de cr�dito - desconto de 7%. 
*/

float calcularTotal(int opcao, float v){
	switch (opcao){
		case 1:
			v = v - (v * 0.10);
			return v;
		case 2:
			v = v - (v * 0.05);
			return v;
		case 4:
			v = v + (v * 0.05);
			return v;
		case 5:
			v = v - (v * 0.08);
			return v;
		case 6: 
			v = v - (v * 0.07);
			return v;
		default:
			printf("opcao invalida");
	}
}


main(){
	float valor=0, total = 0;
	int opcao;
	printf("Digite o valor da venda:\n");
	scanf("%f",&valor);

	printf("Escolha uma condicao de pagamento a ser executada:\n");
	printf("1 - Venda a Vista - desconto de 10%c\n",37);
	printf("2 - Venda a Prazo 30 dias - desconto de 5%c\n",37);
	printf("3 - Venda a Prazo 60 dias - mesmo preco\n");
	printf("4 - Venda a Prazo 90 dias - acr�scimo de 5%c\n",37);
	printf("5 - Venda com cart�o de d�bito - desconto de 8%c\n",37);
	printf("6 - Venda com cart�o de cr�dito - desconto de 7%c\n",37);
	scanf("%d", &opcao);
	
	total = calcularTotal(opcao, valor);
	
	printf("O valor pago na compra foi de: %.2f",total);
}



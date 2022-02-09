/*
7.	Fazer um programa para ler um código (número inteiro) e mostrar uma mensagem de acordo com a tabela abaixo.
Código		Mensagem
1		Grupo com 50% de promoção
3 ou 5		Grupo sem desconto
10 até 20	Grupo com 10% de desconto
outro		Código não válido
*/

#include <stdio.h>
main(){
	int valor;
	printf("Digite um valor de 1 a 20:");
	scanf("%d",&valor);
	switch (valor){
		case 1:
			printf("Grupo com 50%c de promocao",37);
			break;
		case 3 :
			printf("Grupo sem desconto");
			break;
		case 5:
			printf("Grupo sem desconto");
			break;
		case 10 ... 20:
			printf("Grupo com 10%c de desconto",37);
			break;
		default:
			printf("opcao invalida");
	}
}


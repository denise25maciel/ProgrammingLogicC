/*
7.	Fazer um programa para ler um c�digo (n�mero inteiro) e mostrar uma mensagem de acordo com a tabela abaixo.
C�digo		Mensagem
1		Grupo com 50% de promo��o
3 ou 5		Grupo sem desconto
10 at� 20	Grupo com 10% de desconto
outro		C�digo n�o v�lido
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


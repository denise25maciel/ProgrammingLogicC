/*
9.	Um vendedor necessita de um programa que calcule o pre�o total devido por um cliente.
 O programa deve receber o c�digo de um produto e a  quantidade comprada e calcular o pre�o total, 
 usando a tabela abaixo. Mostrar uma mensagem no caso de c�digo inv�lido.
C�digo Produto		      Pre�o Unit�rio
1001					R$ 5,32
1324					R$ 6,45
6548					R$ 2,37
987				      	R$ 5,32
7623					R$ 6,45
*/

#include <stdio.h>
main(){
	int prod;
	float quantidade;
	
	printf("Digite o produto(1001, 1324, 6548,987,7623):\n");
	scanf("%d",&prod);
	printf("Digite a quantidade:\n");
	scanf("%f",&quantidade);
	
	switch (prod){
		case 1001 :
			printf("Preco Total: %.2f", quantidade *5.32);			
			break;
		case 1324 :
			printf("Preco Total: %.2f", quantidade *6.45);
			break;
		case 6548:
			printf("Preco Total: %.2f", quantidade *2.37);
			break;
		case 987:
			printf("Preco Total: %.2f", quantidade *5.32);
			break;
		case 7623 :
			printf("Preco Total: %.2f", quantidade *6.45);
			break;
		default:
			printf("opcao invalida");
	}
}

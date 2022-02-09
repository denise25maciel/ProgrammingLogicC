/*
11.	Construa um programa de venda de produto. O programa deve: 
Informar dois tipos de produto e seu valor unitário (definido pelo programador);
Pedir para que o usuário informe quantas unidades do produto 1 deseja obter;
Pedir para que o usuário informe quantas unidades do produto 2 deseja obter;
Calcular o valor total da compra (produto 1 * valor unitário + produto 2 * valor unitário) e exibir o resultado.

*/
#include <stdio.h>
#define PI 3.14

main(){
	int quantidadeA, quantidadeB, resultado;
	printf ("Caro cliente,\ndisponibilizamos a voce \ncamisetas -> R$ 50.00  \nbaby looks -> R$ 70.00 \n");
	printf("\nDigite quantas camisetas deseja obter\n");
	scanf("%d", &quantidadeA);
	printf("Digite quantas baby looks deseja obter");
	scanf("%d", &quantidadeB);
	
	resultado = (quantidadeA*50) + (quantidadeB*70);
	
	system ("cls");
	printf("O valor final da compra e: %d", resultado);
}


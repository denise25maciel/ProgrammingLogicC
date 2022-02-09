/*
9.	Faça um algoritmo que leia um conjunto de n inteiros, sendo n informado pelo usuário.
Utilizando WHILE imprima o maior e o menor dado informado.  
*/
#include <stdio.h>

main(){
	int i;
	int elemento = 0;
	int maior=0;
	int menor=0;
	int quantidade=0;

	printf("Digite a quantidade de elementos:");
	scanf("%d", &quantidade);

	while (quantidade>0){
		printf ("Informe um elemento\n");
		scanf("%d", &elemento);
		// primeiro elemento digitado
		if ((maior ==0)&&(menor ==0)){
				maior=elemento;
				menor=elemento;
		}
		if (elemento> maior)
			maior = elemento;
		if (elemento<menor)
			menor = elemento;
		quantidade--;
	}

	printf("Maior elemento informado %d\n", maior);
	printf("Menor elemento informado %d\n", menor);
}






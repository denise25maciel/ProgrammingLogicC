/*
10.	Crie um programa para ler uma letra e mostrar uma mensagem: se é vogal maiúscula, vogal minúscula ou consoante. 
Considere somente as letras do alfabeto.

*/

#include <stdio.h>
main(){
	char caracter;
	int quantidade;
	
	printf("Digite uma letra");
	scanf("%c",&caracter);

	
	switch (caracter){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("\nA letra digitada e uma vogal maiuscula");
			break;
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\nA letra digitada e uma vogal minuscula");
			break;
		default:
			printf("\nA letra digitada e uma consoante");
	}
}

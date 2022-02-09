/*
5.	Escreva um programa que lê um número inteiro. Através de FUNÇÃO verifique e imprima se o número é positivo ou negativo. (L2.3)..
*/
verificar(v){
	if (v>=0)
		printf("Numero positivo");
	else
		printf("Numero negativo");
}

main(){
	int valor, resultado;
	printf("Entre com um valor:");
	scanf("%d", &valor);
	verificar(valor);

		
	
}


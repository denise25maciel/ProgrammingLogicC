/*
5.	Escreva um programa que l� um n�mero inteiro. Atrav�s de FUN��O verifique e imprima se o n�mero � positivo ou negativo. (L2.3)..
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


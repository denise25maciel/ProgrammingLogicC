/*
6.	Escreva um programa que lê um número inteiro. 
Através de FUNÇÃO verifique se o número é positivo ou negativo. 
Imprima o resultado na FUNÇÃO MAIN (L2.3).
*/
int verificar(v){
	if (v>=0)
		return 1;
	else
		return 0;
}

main(){
	int valor, resultado;
	printf("Entre com um valor:");
	scanf("%d", &valor);
	resultado = verificar(valor);
	if (resultado == 1)
		printf("Numero positivo");
	else
		printf("Numero negativo");
	
}


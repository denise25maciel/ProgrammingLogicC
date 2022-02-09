/*
7.	Escreva um programa que lê um número inteiro. Através de uma FUNÇÃO verifique se o mesmo é par ou ímpar. 
Através de outra FUNÇÃO verifique se é positivo ou negativo. 
Ambas as funções devem RETORNAR o resultado para que seja impresso pelo programa principal (L2.8).
*/
int verificarPar(v){
	if (v%2 ==0)
		return 1;
	else
		return 0;
}
int verificarPositivo(v){
	if (v>=0)
		return 1;
	else
		return 0;
}

main(){
	int valor, resultadoPar, resultadoPositivo;
	printf("Entre com um valor:");
	scanf("%d", &valor);
	resultadoPar = verificarPar(valor);
	resultadoPositivo = verificarPositivo(valor);
	
	if (resultadoPar == 1)
		printf("Numero par\n");
	else
		printf("Numero impar\n");
		
	if (resultadoPositivo == 1)
		printf("Numero positivo\n");
	else
		printf("Numero negativo\n");	
}




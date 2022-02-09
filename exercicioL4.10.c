/*
10.	Construa um programa que receba um inteiro e o envie para uma FUNÇÃO. 
Utilizando SWITCH/CASE verificar qual o dia da semana correspondente. 
Sendo 1 para domingo, 2 para segunda, 3 para terça, etc. 
Após fazer a verificação o programa deve RETORNAR o resultado e este deve ser impresso no programa principal (L3.3).
*/
char* determinarDia(int v){
	switch (v){
		case 1:
			return "domingo";
		case 2:
			return "segunda";
		case 3:
			return "terca";
		case 4:
			return "quarta";
		case 5:
			return "quinta";
		case 6:
			return "sexta";
		case 7:
			return "sabado";
		default:
			printf ("O valor digitado nao e valido\n");
			break;
	}
}


main(){
	int valor;
	char* dia;
	
	printf("Digite um valor de 1 a 7:\n");
	scanf ("%d", &valor);
	dia = determinarDia(valor);
	
	printf("O dia escolhido foi: %s",dia);
}

////////////////////////////////////////////////////////
///////////////////////////////////////////////////////


/*
11.	Fa�a um programa que leia quatro notas obtidas por um aluno na disciplina de C�lculo. 
Calcule a m�dia das notas. Se a m�dia for superior a 6 imprima "APROVADO", caso contr�rio, imprima "REPROVADO".
*/
#include <stdio.h>

main(){
	float nota1=0, nota2=0, nota3=0, nota4=0, media=0;
	printf("Entre com a primeira nota:");
	scanf("%f", &nota1);
	printf("Entre com a segunda nota:");
	scanf("%f", &nota2);
	printf("Entre com a terceira nota:");
	scanf("%f", &nota3);
	printf("Entre com a quarta nota:");
	scanf("%f", &nota4);
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	if (media>6)
		printf("APROVADO");
	else
		printf("REPROVADO");
}


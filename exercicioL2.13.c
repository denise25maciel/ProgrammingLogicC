/*
13.	Fa�a um programa que leia o n�mero de presen�as e quatro notas obtidas por um aluno na disciplina de C�lculo. Calcule a m�dia das notas. 
Se a m�dia for superior a 6 E o aluno possuir 20 ou mais presen�as imprima "APROVADO"; 
se a m�dia estiver entre 5 e 5.9 e o aluno possuir 20 ou mais presen�as imprima "DEPEND�NCIA"; 
se o aluno possuir menos de 20 presen�as OU m�dia inferior a 5 imprima REPROVADO
*/
#include <stdio.h>
main(){
	float nota1=0, nota2=0, nota3=0, nota4=0, frequencia = 0, media=0;
	printf("Entre com a frequencia:");
	scanf("%f", &frequencia);
	printf("Entre com a primeira nota:");
	scanf("%f", &nota1);
	printf("Entre com a segunda nota:");
	scanf("%f", &nota2);
	printf("Entre com a terceira nota:");
	scanf("%f", &nota3);
	printf("Entre com a quarta nota:");
	scanf("%f", &nota4);
	
	media = (nota1+nota2+nota3)/3;
	
	if ((media>6)&&(frequencia>=20))
		printf("APROVADO");
	else 
		printf("REPROVADO");
}


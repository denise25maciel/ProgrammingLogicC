/*
13.	Faça um programa que leia o número de presenças e quatro notas obtidas por um aluno na disciplina de Cálculo. Calcule a média das notas. 
Se a média for superior a 6 E o aluno possuir 20 ou mais presenças imprima "APROVADO"; 
se a média estiver entre 5 e 5.9 e o aluno possuir 20 ou mais presenças imprima "DEPENDÊNCIA"; 
se o aluno possuir menos de 20 presenças OU média inferior a 5 imprima REPROVADO
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


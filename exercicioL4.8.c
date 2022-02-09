/*
8. 	Faça um programa que leia quatro notas obtidas por um aluno na disciplina de Cálculo.  Através de FUNÇÃO calcule a média das notas. 
Através de uma segunda FUNÇÃO verifique a situação do aluno. 
Se a média for superior a 6 o aluno está aprovado, se a média estiver entre 5 e 5.9º aluno está em dependência; 
se a média for inferior a 5º aluno está reprovado. O resultado da situação do aluno deve ser RETORNADO para o programa principal
 e impresso para o usuário (L2.12).
*/

float calcularMedia(float n1, float n2, float n3, float n4){
	return (n1+n2+n3+n4)/4;
}
int calcularSituacao(float m){
	if (m>6)
		return 1;
	else if(m>5)
		return 0;
	else
		return -1;
}

main(){
	float nota1=0, nota2=0, nota3=0, nota4=0, media=0, situacao = 0;
	printf("Entre com a primeira nota:");
	scanf("%f", &nota1);
	printf("Entre com a segunda nota:");
	scanf("%f", &nota2);
	printf("Entre com a terceira nota:");
	scanf("%f", &nota3);
	printf("Entre com a quarta nota:");
	scanf("%f", &nota4);
	
	media = calcularMedia(nota1,nota2,nota3,nota4);
	situacao = calcularSituacao(media);
	
	if (situacao == 1)
		printf("APROVADO");
	else if(situacao ==0)
		printf("DEPENDENCIA");
	else
		printf("REPROVADO");
}

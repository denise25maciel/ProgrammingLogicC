#include<stdio.h>
#include<string.h>
/*
12.	Peça para que o usuário informe um nome qualquer, grave esse nome em um arquivo utilizando  função fputc() . 
*/
 main()
{
    FILE *file;
    char ch;
    char palavra[50];
    int i=0;

    file = fopen("exercicioL7.12.txt", "w");
    
    if ( file== NULL)
        printf("Erro na criacao/abertura do arquivo. \n");
	else
		printf("Digite qualquer palavra para ser inserida no arquivo:\n");
		scanf("%s", &palavra);
		//grava caracteres no arquivo
 		for (i=0; i< strlen(palavra); i++)
 			fputc(palavra[i],file);   
 			
} 

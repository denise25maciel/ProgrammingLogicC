#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
13. Faça a leitura do conteúdo do arquivo gerado no Exercício 12 utilizando o comando fgetc().
*/

 main()
{
    FILE *file;
    char ch;
    char palavra[50];
    int i=0;

    file = fopen("exercicioL7.12.txt", "r");
    
    if ( file== NULL)
        printf("Erro na criação/abertura do arquivo. \n");
	else
		//grava caracteres no arquivo
 	
 		printf("Palavra digitada:\n");
	 	while((ch=fgetc(file)) != EOF)  /*Lê um caractere do arquivo */
	 		printf("%c",ch);            /*imprime o caractere no vídeo */
			
			       
	    fclose(file);
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
13. Fa�a a leitura do conte�do do arquivo gerado no Exerc�cio 12 utilizando o comando fgetc().
*/

 main()
{
    FILE *file;
    char ch;
    char palavra[50];
    int i=0;

    file = fopen("exercicioL7.12.txt", "r");
    
    if ( file== NULL)
        printf("Erro na cria��o/abertura do arquivo. \n");
	else
		//grava caracteres no arquivo
 	
 		printf("Palavra digitada:\n");
	 	while((ch=fgetc(file)) != EOF)  /*L� um caractere do arquivo */
	 		printf("%c",ch);            /*imprime o caractere no v�deo */
			
			       
	    fclose(file);
}

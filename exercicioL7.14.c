#include<stdio.h>
#include<string.h>
/*
12.	Pe�a para que o usu�rio informe um nome qualquer, grave esse nome em um arquivo utilizando  fun��o fputc() . 
*/
 main()
{
    FILE *file;
    char resultado[50];
    char palavra[50];
    int i=0;

    file = fopen("exercicioL7.14.txt", "w");
    
    if ( file== NULL)
        printf("Erro na cria��o/abertura do arquivo. \n");
	else
		printf("Digite qualquer palavra para ser inserida no arquivo:\n");
		scanf("%s", &palavra);
		//grava caracteres no arquivo
		fputs(palavra,file);   
 		fclose(file);
	
}

#include<stdio.h>
#include<string.h>
/*
12.	Peça para que o usuário informe um nome qualquer, grave esse nome em um arquivo utilizando  função fputc() . 
*/
 main()
{
    FILE *file;
    char resultado[50];
    char palavra[50];
    int i=0;

    file = fopen("exercicioL7.14.txt", "w");
    
    if ( file== NULL)
        printf("Erro na criação/abertura do arquivo. \n");
	else
		printf("Digite qualquer palavra para ser inserida no arquivo:\n");
		scanf("%s", &palavra);
		//grava caracteres no arquivo
		fputs(palavra,file);   
 		fclose(file);
	
}

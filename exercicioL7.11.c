#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
11.	Escreva um programa que crie um arquivo, o usuário deve informar o nome. 
Verificar se o arquivo foi aberto com sucesso. Fechar o arquivo.
*/
 main()
{
    FILE *file;
    char ch;
    char filename[80];

    printf("Digite o nome do arquivo a ser criado: \n");
    gets(filename);
    file = fopen(filename, "w");
    if ( == NULL)
        printf("Erro na criação/abertura do arquivo. \n");
	else
		printf("Arquivo criado com sucesso");
		
    fclose(file);
}

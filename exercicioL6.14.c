/*
14.	Fa�a um programa onde o usu�rio digita 3 informa��es a respeito de uma pessoa: Nome, endere�o e telefone. 
Concatene essas tr�s informa��es em uma �nica string.
*/

#include <stdio.h>
#include <string.h>
main( )
{
    char nome[50], endereco[100], telefone[15], dadosPessoais[150]="";
    printf("Digite o nome: ");
    gets(nome);
    printf("Digite o endereco: ");
    gets(endereco);
    printf("Digite o telefone: ");
    gets(telefone);
    strcat(dadosPessoais,nome);
    strcat(dadosPessoais,"\n");
    strcat(dadosPessoais,endereco);
    strcat(dadosPessoais,"\n");
    strcat(dadosPessoais,telefone);
    printf("\n\n");
    puts(dadosPessoais);
}



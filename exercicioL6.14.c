/*
14.	Faça um programa onde o usuário digita 3 informações a respeito de uma pessoa: Nome, endereço e telefone. 
Concatene essas três informações em uma única string.
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



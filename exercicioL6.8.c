/*
8. Solicitar que o usu�rio digite um nome qualquer, imprimi-lo de tr�s para frente.
*/

#include<stdio.h>
#include<string.h>


main()
{
    char valor[30];
	printf("Digite um nome:");
	gets(valor);
	int i;
    for(i=strlen(valor); i>=0; i--)
        printf("%c", valor[i]);
}

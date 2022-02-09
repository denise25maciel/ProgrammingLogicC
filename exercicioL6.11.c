/*
11.Faça um programa que leia uma string digitada pelo usuário (máximo 20 caracteres) 
e imprima na tela o número de vogais existente nesta string. */
#include <stdio.h>

main()
{
    char palavra[20];
    int tamanho, i, vogais=0;
    printf("\nDigite uma palavra de tamanho maximo 20: ");
    gets(palavra);
    tamanho=strlen(palavra);
    for (i=0;i<tamanho;i++)
        if (toupper(palavra[i])=='A' || toupper(palavra[i])=='E' || toupper(palavra[i])=='I' || toupper (palavra[i])=='O' || toupper (palavra[i])=='U')
              vogais++;
       printf ("\nA palavra %s possui %d vogais\n", palavra, vogais);
}

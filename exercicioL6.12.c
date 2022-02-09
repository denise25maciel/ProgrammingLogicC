/*
12.Desenvolva um programa que compare duas strings sem usar a função strcmp.
*/
#include <stdio.h>
main( )
{
    int i, diferente=0, tam1, tam2, maior;
    char palavra1[30], palavra2[30];
    printf("Digite a primeira palavra: ");
    gets(palavra1);
    printf("\nDigite a segunda palavra: ");
    gets(palavra2);
    tam1 = strlen(palavra1);
    tam2 = strlen(palavra2);
    if(tam1>tam2)
        maior=tam1;
    else
        maior=tam2;

    for(i=0; i<=maior; i++)
    {
        if(palavra1[i]!=palavra2[i])
        {
            diferente=1;
        }
   }

    if(diferente==0)
    {
        printf("As duas strings informadas sao iguais!!!\n");
    }
    else
    {
        printf("As duas strings informadas sao diferentes entre si!!!\n");
    }
}

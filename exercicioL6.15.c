/* 15. Deseja-se ler duas cadeias de N caracteres cada e verificar se uma é anagrama da outra,
Exemplos de anagramas: ALMA e LAMA - BOLO e LOBO - ROMA e AMOR
*/

#include<stdio.h>

main()
{
    char palavra1[20], palavra2[20];
    int i, j, cont, tam1, tam2;
    printf("Digite a primeira palavra:\n");
    gets(palavra1);
    printf("Digite a segunda palavra:\n");
    gets(palavra2);
    cont=0;
    tam1=strlen(palavra1);
    tam2=strlen(palavra2);
    if(tam1==tam2)
    {
        for(i=0; i<tam1; i++)
            for(j=0; j<tam2; j++)
            {
                if(palavra1[i]==palavra2[j])
                {
                    palavra2[j]='*';
                    cont=cont+1;
                    break;

                }

            }
    }
    if(tam2==cont)
    {
        printf("Sao anagramas\n");
    }
    else
    {
        printf("Nao sao anagramas\n");
    }
}

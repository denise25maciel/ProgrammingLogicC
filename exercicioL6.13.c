/*13.	Desenvolva um programa que compare
 duas strings e indique se são iguais. 
Caso sejam diferentes, indicar qual
possui maior comprimento.
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
    
    if (strcmp(palavra1,palavra2) == 0)
        printf("\n\nAs palavras sao iguais!");
    else {
        printf("\n\nAs palavras sao diferentes!");
        tam1 = strlen(palavra1);
        tam2 = strlen(palavra2);
    	if (tam1 > tam2)
        	printf("\n\nA primeira palavra eh maior");
   		else if (tam1 < tam2)
            printf("\n\nA segunda palavra e maior");
        else
            printf("\n\nAs palavras sao do mesmo tamanho");
    }
}

    
  

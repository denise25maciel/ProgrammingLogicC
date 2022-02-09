/* 
10. Receber do teclado a sigla do estado de uma pessoa e imprimir
uma das seguintes mensagens:
Paranaense || Gaucho || Catarinense || Outros estados
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char estado[3];
    printf("Informe a sigla de um estado do Brasil: ");
    scanf("%s", estado);
    if(!strcmp(estado,"PR") || !strcmp(estado,"pr"))
        printf("Paranaense\n");
    else if(!strcmp(estado,"RS") || !strcmp(estado,"rs"))
            printf("Gaucho\n");
    else if(!strcmp(estado,"SC") || !strcmp(estado,"sc"))
            printf("Catarinense\n");
    else
            printf("Outros estados\n");
    printf("\n");
	return 0;
}

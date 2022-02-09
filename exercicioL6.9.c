/*
9. Palíndromos são palavras ou frases que em língua portuguesa podem ser lidas da direita para a esquerda, como é usual, 
ou da esquerda para a direita. Como por exemplo a palavra OVO, RADAR, MUSSUM entre outras. 
Faça um programa no qual o usuário informe uma palavra e seja verificada e apresentada se a mesma é ou não um palíndromo.
*/

#include<stdio.h>
#include <string.h>

main()
{
    int x,y=0,tam;
    char nome[30], invertido[30];
    printf("Digite uma palavra: ");
    gets(nome);
    tam = strlen(nome);
    for (x=tam-1; x >= 0; x--){
        invertido[y]=nome[x];
        y++;
    }
    if(strcmp(invertido,nome)==0)
        printf("Esta palavra e um palindromo.\n");
    else
        printf("Esta palavra nao e um palindromo.\n");
}

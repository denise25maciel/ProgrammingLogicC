/*
6.	Criar um programa que leia os vetores A, B e C. Então, calcule e exiba o vetor D.  Perceba que o zero no vetor de respostas também indica possível erro.
A = | 7| 4| 9| 3| 6|
B = | +| -| /| *| /|
C = | 1| 3| 3| 2| 0|
D = | 8| 1| 3| 6| 0|
*/

#include<stdio.h>
#define TAM 5

main()
{
    int vetorA[TAM]={7,4,9,3,6}, vetorC[TAM]={1,3,3,2,0}, vetorD[TAM], i;
    char vetorB[TAM]={'+','-','/','*','/'};

    for(i=0; i<TAM; i++)
    {
        
        switch(vetorB[i])
        {
            case '+':
                vetorD[i]=vetorA[i]+vetorC[i];
                break;
            case '-':
                vetorD[i]=vetorA[i]-vetorC[i];
                break;
            case 'X':
            case '*':
                vetorD[i]=vetorA[i]*vetorC[i];
                break;
            case '/':
                if(vetorC[i]==0){
                    vetorD[i]=0;
                    break;
                }
                else{
                    vetorD[i]=vetorA[i]/vetorC[i];
                    break;
                }
            default:
                printf("Operador desconhecido");
        }
    }
    printf("A=");
    for(i=0; i<TAM; i++)
    {
        printf("| %d ", vetorA[i]);
    }
    printf("|\n");
    printf("B=");
    for(i=0; i<TAM; i++)
    {
        printf("| %c ", vetorB[i]);
    }
    printf("|\n");
    printf("C=");
    for(i=0; i<TAM; i++)
    {
        printf("| %d ", vetorC[i]);
    }
    printf("|\n");
    printf("D=");
    for(i=0; i<TAM; i++)
    {
        printf("| %d ", vetorD[i]);
    }
    printf("|\n");
}

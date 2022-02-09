/*
15.	Faça um programa que calcule a tabuada do 1 ao 5 e imprima o resultado. A impressão deve ocorrer de 
forma simultânea entre as tabuadas.
 Ex:1x1 ,2x1, 3x1, 4x1 e 5x1 devem ser impressos antes que se calcule 1x2,2x2,3x2,4x2 e 5x2. Usar FOR.
*/

#include<stdio.h>

main ( )
{
	int i, j, K;
	printf("\n");
	//imprime cabecalhos
	for(i=1;i<=5;i++)
		printf("tabuada do %d ",i);
	//imprime tabuada	
	printf("\n");
	for(i=1;i<=10;i++)
	{
		for(j=1; j<=5;j++)
			printf("%3d x%3d=%3d ", j,i,j*i);
    	sleep(1);
		printf("\n");
		
	}
}

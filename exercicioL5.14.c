/*
14. Fa�a um programa que solicita que o usu�rio entre com um n�mero.
Calcule a tabuada (de 1 a 10) para esse valor. Utilize WHILE.
*/

#include<stdio.h>

main()
{
    int numero=0, opcao=1;
    printf("\nInforme o numero para o calculo da tabuada:\n");
    scanf("%d", &numero);

    int i=0;
   	while(i<=10)
    {
       	printf("%d X %d = %d \n", numero, i, numero*i);
       	i++;
    } 
}


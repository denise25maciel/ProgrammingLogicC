/*
13.	Desenvolva um programa para ler valores para as variaveis y e z. Depois, calcule e mostre o valor de x, sendo: :x =((3*y) * (y+z))/ z
*/
#include <stdio.h>
#define PI 3.14

main(){
	float valorX, valorY, valorZ;
	
	printf ("Insira o valor de Y:\n");
	scanf("%f", &valorY);
	printf ("Insira o salario de Z \n");
	scanf("%f", &valorZ);
	
	valorX = ((3*valorY)*(valorY+valorZ))/valorZ;
	
	printf ("O valor de X e %.2f\n", valorX);


}


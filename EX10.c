/*
Construa um algoritmo que leia um vetor de 20 elementos 
e coloque-os em ordem crescente
*/

#include <stdio.h>

int main (void)
{
	int contador, numeros[20], aux=0, contador_b;
	
	for(contador=0; contador<20; contador++)
	{
		printf("Digite os numeros do vetor: ");
		scanf("%i", &numeros[contador]);
		fflush(stdin);
	}
	for(contador=0; contador<20; contador++)
	{
		for(contador_b=0; contador_b<20; contador_b++)
		{
			if (numeros[contador] < numeros[contador_b])
			{
				aux=numeros[contador];
				numeros[contador]=numeros[contador_b];
				numeros[contador_b]=aux;
				
			}
		}
	}
	for (contador=0; contador<20; contador ++)
	{
		printf("%i ", numeros[contador]);
	}
	
	return 0;
}

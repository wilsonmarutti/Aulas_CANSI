/*
10. Fa�a um programa que pe�a dois n�meros inteiros (base e expoente), 
calcule e mostre o primeiro n�mero elevado ao segundo n�mero.
*/
#include <stdio.h>

int main (void){

	int base, expo, i;
	double res=1;

	printf("Digite a base: ");
	scanf("%i",&base);
	fflush(stdin);
	printf("Digite o expoente: ");
	scanf("%i",&expo);
	fflush(stdin);

	for(i=1;i<=expo;i++){
		res=res*base;
	}

	printf("O resultado e %.lf",res);
	
	return 0;
}

/*
10. Faça um programa que peça dois números inteiros (base e expoente), 
calcule e mostre o primeiro número elevado ao segundo número.
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

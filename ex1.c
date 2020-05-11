/*
1. Faça um programa que peça dois números inteiros e gere os números 
inteiros que estão no intervalo entre eles.
*/
#include <stdio.h>

int main (void){
	int num1, num2, i, aux;

	printf("Digite 1 numero: ");
	scanf("%i",&num1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&num2);
	fflush(stdin);
	
	if(num1>num2){
		aux=num1;
		num1=num2;
		num2=aux;
	}
	

	for(i=num1+1;i<num2;i++){
		printf("%i, ",i);
	}
	
	return 0;
}

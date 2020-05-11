/*
4. Faça um programa que calcule e mostre a média bimestral da turma. 
O usuário deve informar a quantidade de notas, bem como cada nota.
*/

#include <stdio.h>

int main (void){
	int quantnotas, i;
	float mediaturma, nota, soma=0;
	
	printf("Digite a quantidade de notas: ");
	scanf("%i",&quantnotas);
	fflush(stdin);
	for(i=1;i<=quantnotas;i++){
		printf("Digite %i nota: ", i);
		scanf("%f",&nota);
		fflush(stdin);
		soma=soma+nota;	
	}

	mediaturma=(float)soma/quantnotas;

	printf("A media e %.2f",mediaturma);
	return 0;
}


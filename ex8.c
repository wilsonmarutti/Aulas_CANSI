/*
8. Supondo que a popula��o de um pa�s A seja da ordem de 80.000 habitantes
com uma taxa anual de crescimento de 3% e que a popula��o do pa�s B seja, 
aproximadamente, de 200.000 habitantes com uma taxa de crescimento anual
 de 1,5%. Fazer um programa que calcule e escreva o n�mero de anos 
 necess�rios para que a popula��o do pa�s A ultrapasse ou iguale a 
 popula��o do pa�s B, mantidas essas taxas de crescimento.
*/

#include <stdio.h>

int main (void){
	int qdt_A = 80000, qdt_B = 200000, anos=0;
	
	while(qdt_A <= qdt_B){
		qdt_A=qdt_A*1.03;
		printf("%i\t",qdt_A);
		qdt_B=qdt_B*1.015;
		printf("%i\n",qdt_B);
		anos++;
	}
	printf("Quantidade de anos e %i",anos);
	
	return 0;
}


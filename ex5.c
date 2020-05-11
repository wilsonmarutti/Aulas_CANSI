/*
5. Faça um programa que calcule o número médio de alunos por turma.
Para isto, peça a quantidade de turmas e a quantidade de alunos
para cada turma. As turmas não podem ter mais de 40 alunos.
*/

#include <stdio.h>

int main (void){
	int numalunos, numturmas, i, limite = 40, soma = 0;
	float mediaalunos;

	printf("Digite o numero de turmas: ");
	scanf("%i",&numturmas);
	fflush(stdin);
	for(i=1;i<=numturmas;i++){
		printf("Digite a quantidade de alunos na turma %i: ",i);
		scanf("%i",&numalunos);
		fflush(stdin);
		if(numalunos > 0 && numalunos <= 40){
			soma=soma+numalunos;
		}else{
			printf("Erro, fora do intervalo de alunos!\n");
			i--;
		}
	}

	mediaalunos=(float)soma/numturmas;

	printf("A media de alunos por turma e %.1f",mediaalunos);
	
	return 0;
}

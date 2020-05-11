/*
9. Faça um programa que calcule e mostre a soma dos números pares entre 
100 e 200 (inclusive). O usuário deve ter a opção de repetir quantas 
vezes quiser esta operação.
*/

#include <stdio.h>

int main (void){
	int soma, i;
	char op;
	
	do{
		soma=0;
		for(i=100;i<=200;i++){
			if(i%2==0){
				soma=soma+i;
			}
		}
		soma=0;
		printf("A soma e %i\n",soma);
		printf("Deseja repetir a operacao? (s/n) ");
		scanf("%c",&op);
		fflush(stdin);
	}while(op == 's');
	
	return 0;
}


/*
7. Fa�a um programa que gere a tabuada de 1 a 10 de qualquer n�mero. 
O usu�rio deve informar de qual n�mero deseja ver a tabuada.
*/
#include <stdio.h>

int main (void){

	int num, i;
	char op;
	
	do{
		system("cls");
		printf("Digite o valor da tabuada desejada: ");
		scanf("%i",&num);
		fflush(stdin);
		
		for(i=1;i<=10;i++){
			printf("%i x %i = %i\n",i,num,num*i);
		}
		printf("Deseja outra tabuada (s/n): ");
		scanf("%c",&op);
		fflush(stdin);
	}while(op=='s');
	return 0;
}


	/*
1)Faça um programa que implemente uma calculadora simples. O programa deve solicitar os operandos e o operador e mostrar a entrada e o resultado.
Inclua verificadores de erro para operadores inválidos e tentativa de divisão por zero.
*/
#include <stdio.h>

int main(void){
	char opera,op;
	float n1,n2,res;
	printf("Bem vindo a calculadora\n");
	printf("Informe o primeiro valor: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Informe a operação desejada (ex: +,-,*,/): ");
	scanf("%c",&opera);
	fflush(stdin);
	printf("Informe o segundo valor: ");
	scanf("%f",&n2);
	fflush(stdin);
	switch(opera){
		case'+':
			res = n1+n2;
			printf("Seu resultado e: %f\n",res);
			break;
		case'-':
			res = n1-n2;
			printf("Seu resultado e: %f",res);
			break;
		case'*':
			res = n1*n2;
			printf("Seu resultado e: %f",res);
			break;
		case'/':
			if(n1==0){
			}else if(n2==0){
				printf("Nao e possivel divisao por 0; ");
			}
			else{
				res = n1/n2;
				printf("Seu resultado e: %f",res);
			}
			break;
	}
	return 0;
}

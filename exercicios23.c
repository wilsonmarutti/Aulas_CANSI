#include <stdio.h>

int main (void){
	float n1, n2, n3, m;
	printf("Digite 1 nota: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Digite 2 nota: ");
	scanf("%f",&n2);
	fflush(stdin);
	printf("Digite 3 nota: ");
	scanf("%f",&n3);
	fflush(stdin);
	m=(n1+n2+n3)/3;
	if (m==10){
		printf("Aprovado com Distincao");
	}else if(m<7){
		printf("Reprovado");
	}else{
		printf("Aprovado");
	}
	
	return 0;
}

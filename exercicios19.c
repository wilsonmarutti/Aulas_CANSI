#include <stdio.h>

int main(void){
	float num;
	printf("Digite um numero: ");
	scanf("%f",&num);
	fflush(stdin);
	if((int)num == num){
		printf("inteiro");
	}else{
		printf("quebrado");
	}
	return 0;
}

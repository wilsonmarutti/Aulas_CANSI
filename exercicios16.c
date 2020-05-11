#include <stdio.h>

int main(void){
	int num;
	printf("Dig. numero: ");
	scanf("%i",&num);
	fflush(stdin);
	if(num>0){
		printf("Positivo");
	}else if(num<0){
		printf("Negativo");
	}else{
		printf("Neutro");
	}
	return 0;
}

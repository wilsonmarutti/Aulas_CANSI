#include <stdio.h>

int main(void){
	float n1,n2, res;
	printf("Dig. Primeiro numero: ");
	scanf("%f",&n1);
	fflush(stdin);	
	printf("Dig. segundo numero: ");
	scanf("%f",&n2);
	fflush(stdin);
	res=n1+n2;
	printf("A soma e %.1f",res);
	return 0;
}

#include <stdio.h>

int main (void){
	float fah, cel;
	printf("Digite o valor em Fahrenheit: ");
	scanf("%f",&fah);
	fflush(stdin);
	cel=5*(fah-32)/9;
	printf("Celsius e : %.2f",cel);
	
	return 0;
}

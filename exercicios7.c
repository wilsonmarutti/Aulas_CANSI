#include <stdio.h>

int main (void){
	float cen, met;
	printf("Dig. o valor em metros");
	scanf("%f",&met);
	fflush(stdin);
	cen = met*100;
	printf("o valor en centimetros e %.2f",cen);	
	return 0;
}

#include <stdio.h>

int main (void){
	float n1, n2, n3, n4, med;
	printf("Dig. primeira nota");
	scanf("%f",n1);
	fflush(stdin);
	printf("Dig. segunda nota");
	scanf("%f",n2);
	fflush(stdin);
	printf("Dig. terceira nota");
	scanf("%f",n3);
	fflush(stdin);
	printf("Dig. quarta nota");
	scanf("%f",n4);
	fflush(stdin);
	med = (n1+n2+n3+n4)/4
	printf("A media e %.1f",med);
	return 0;
}

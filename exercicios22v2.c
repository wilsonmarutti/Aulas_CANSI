#include <stdio.h>

int main (void){
	int n1, n2 ,n3, aux;
	printf("Dig. n1: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Dig. n2: ");
	scanf("%i",&n2);
	fflush(stdin);
	printf("Dig. n3: ");
	scanf("%i",&n3);
	fflush(stdin);
	
	if (n1>n2){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	if (n1>n3){
		aux = n1;
		n1 = n3;
		n3 = aux;
	}
	if (n2>n3){
		aux=n2;
		n2=n3;
		n3=aux;
	}
	
	printf("%i, %i, %i",n1, n2, n3);
	return 0;
}

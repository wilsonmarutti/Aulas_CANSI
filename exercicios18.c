#include <stdio.h>

int main (void){
	int num;
	printf("Dig. numero: ");
	scanf("%i",&num);
	fflush(stdin);
	printf("Numero: %i",num+1);
	return 0;
}

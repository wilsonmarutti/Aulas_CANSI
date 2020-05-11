#include <stdio.h>

int main (void){
	int num;
	printf("Dig. numero: ");
	scanf("%i",&num);
	fflush(stdin);
	if (num%2==0){
		printf("Par");
	}else{
		printf("Impar");
	}
	return 0;
}

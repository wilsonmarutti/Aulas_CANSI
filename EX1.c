#include <stdio.h>

int main(void){
	int i, soma=0, num[10];
	
	for(i=0;i<10;i++){
		printf("Digite o %i numero: ",i+1);
		scanf("%i",&num[i]);
	}
	for(i=0;i<10;i++){
		soma=soma+num[i];
	}
	printf("A soma e %i\n",soma);
	return 0;
}

#include <stdio.h>

int main (void){
	int i;	
	float num[10];
	i = 0;
	do{
		printf("Digite o numero %i: ",i+1);
		scanf("%f",&num[i]);
		i++;
	}while(i<10);
	
	printf("Os numeros sao: \n");
	i=9;
	do{
		printf("%f\n",num[i]);
		i--;
	}while(i>=0);
	return 0;
}

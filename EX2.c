#include <stdio.h>

int main (void){
	
	int i=0;
	float num[5], soma=0, multiplicacao=1;
	
	//Quais são as entradas de dados?
	while(i<5){
		printf("Digite o %i numero: ",i+1);
		scanf("%f",&num[i]);
		fflush(stdin);
		i++;
	}
	indice=0;
	while(indice<5){
		soma=soma+num[i];
		multiplicacao=multiplicacao+num[i];
		indice++;
	}
	printf("A soma e %f\n",soma);
	printf("A multiplicacao e %f\n",multiplicacao);
	i=0;
	printf("Os numeros sao: ");
	while(i<5){
		printf("%.1f, ",num[i]);
		i++;
	}
	
	return 0;
}

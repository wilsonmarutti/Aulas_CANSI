#include <stdio.h>

int main (void){
	int dias;
	float salario;
	printf("Dig. quantidade de dias: ");
	scanf("%i",&dias);
	fflush(stdin);
	salario = (float)25*dias;
	printf("Salario bruto: %.2f",salario);
	printf("IR %.2f",salario*0.08);
	printf("Salario Liquido: %.2f",salario*0.92);	
	
	return 0;	
}

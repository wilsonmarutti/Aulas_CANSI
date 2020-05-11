#include <stdio.h>

int main (void){
	float v_hora, n_hora, total;
	printf("Dig. valor por hora: ");
	scanf("%f",&v_hora);
	fflush(stdin);
	printf("Dig. numero de horas: ");
	scanf("%f",&n_hora);
	fflush(stdin);
	total=v_hora*n_hora;
	printf("Seu salario e %.2f",total);
		
	return 0;
}

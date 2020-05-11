#include <stdio.h>
#include <math.h>

int main(void){
	
	float raio, area;
	printf("Dig. raio: ");
	scanf("%f",&raio);
	fflush("stdin");
	area = M_PI*pow(raio,2);
	printf("A area e %.2f",area);
	return 0;
}


/*
#include <stdio.h>
#include <math.h>

int main(void){
	float raio, area;
	printf("Dig. raio: ");
	scanf("%f",&raio);
	fflush(stdin);
	area = M_PI*pow(raio,2);
	printf("A area e %.2f",area);
	return 0;
}
*/

#include <stdio.h>

int main (void){
	float fah, cel;
	printf("Dig. o valor em Celsius: ");
	scanf("%f",&cel);
	fflush(stdin);
	//cel = 5*(fah-32)/9;
	//cel*9/5= fah - 32
	//cel*9/5+32 =fah;
	fah = cel*9/5+32;
	printf("Fahrenheit e : %.2f",fah);
	return 0;
}

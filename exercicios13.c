#include <stdio.h>

int main (void){
	float x, h, litros, latas;
	
	printf("Digite a largura: ");
	scanf("%f",&x);
	fflush(stdin);
	printf("Digite a altura: ");
	scanf("%f",&h);
	fflush(stdin);
litros=x*h*3;
	latas=litros/3.6;
	if (latas==(int)latas){
		printf("E necessario %i", (int)latas);	
	}else{
		printf("E necessario %i", (int)latas+1);
	}	
	return 0;
}

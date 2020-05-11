#include <stdio.h>
#include <math.h>

int main (void){
	int n1,n2;
	float n3;
	printf("Digite primeiro numero");
	scanf("%i",&n1);
	fflush(stdin);	
	printf("Digite segundo numero");
	scanf("%i",&n2);
	fflush(stdin);	
	printf("Digite primeiro numero");
	scanf("%f",&n3);
	fflush(stdin);
	printf("A) %f\n",n1*2+(float)n2/2);
	printf("B)%f\n",n1*3+n3);
	printf("C) %f\n",pow(n3,2));
	
	return 0;
}

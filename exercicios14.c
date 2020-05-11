#include <stdio.h>

int main(void){
	float s;
	printf("Dig. salario bruto: ");
	scanf("%f",&s);
	fflush(stdin);
	
	printf("Salário Bruto		: R$ %.2f\n",s);
	printf("(-) IR        (15%)	: R$ %.2f\n",s*0.15);
    printf("(-) INSS      (11%)	: R$ %.2f\n",s*0.11);
	printf("(-) Sindicato ( 3%)	: R$ %.2f\n",s*0.03);
	printf("Salário líquido		: R$ %.2f\n",s-(s*0.15+s*0.11+s*0.03));
	
	return 0;
}

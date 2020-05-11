/*
6. Faça um programa que calcule o valor total investido e o custo 
médio por CD. O usuário deverá informar a quantidade de CDs e o valor
 para em cada um.
*/
#include <stdio.h>

int main(void){

	int qtcds, i;
	float cmedio, tinves = 0, valor_cd;

	printf("Digite a quantidade de cds: ");
	scanf("%i",&qtcds);
	fflush(stdin);
	for(i=1;i<=qtcds;i++){
		printf("Digite o valor do cd %i: ",i);
		scanf("%f",&valor_cd);
		fflush(stdin);
		tinves=tinves+valor_cd;
	}
	cmedio=tinves/qtcds;
	
	printf("Custo medio e %.2f\n",cmedio);
	printf("Total investido e %.2f\n",tinves);
	
	return 0;
}

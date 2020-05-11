#include <stdio.h>

int main (void){
	int qt_ma;
	printf("Dig. a quantidade de maquinas: ");
	scanf("%i",&qt_ma);
	fflush(stdin);
	printf("%i pc 20 CV\n",1*qt_ma);
	printf("%i pc 1 CV\n",2*qt_ma);
	printf("%i pc 5 CV\n",3*qt_ma);
	printf("\nCusto total da maquina: R$ %.2f\n\n",(float)(1500*1+300*2+600*3));
	printf("20 CV R$ %.2f\n",(float)(1*qt_ma*1500));
	printf("1 CV  R$ %.2f\n",(float)(2*qt_ma*300));
	printf("5 CV  R$ %.2f\n",(float)(3*qt_ma*600));
	printf("\nTotal da compra R$ %.2f",(float)((1500*1+300*2+600*3)*qt_ma));
	return 0;
}

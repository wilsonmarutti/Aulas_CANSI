#include <stdio.h>

int main (void){
	int a[5][5], b[5][5], r[5][5], i,j;

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite a[%i][%i]:",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite b[%i][%i]:",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			r[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%i\t",r[i][j]);
		}
		printf("\n");
	}
	return 0;
}

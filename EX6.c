#include <stdio.h>

int main (void){
	int a[3][3], b[3][3], r[3][3], i,j;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite a[%i][%i]:",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite b[%i][%i]:",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			r[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%i\t",r[i][j]);
		}
		printf("\n");
	}
	return 0;
}

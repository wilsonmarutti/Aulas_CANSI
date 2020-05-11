
#include <stdio.h>

int main(void){
	int mat[4][4], k, i, j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite valor mat[%i][%i]: ",i,j);
			scanf("%i",&mat[i][j]);
			fflush(stdin);
		}
	}
	printf("Digite a constante k: ");
	scanf("%i",&k);
	fflush(stdin);
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
				mat[i][j]=mat[i][j]*k;
			}
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i\t",mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

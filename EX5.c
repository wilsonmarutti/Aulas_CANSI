#include<stdio.h>

int main(void){
	char palavras[10][15];
	int i,j;
	
	for(i=0;i<15;i++){
		printf("Digite a %i palavra: ",i+1);
		scanf("%s",palavras[i]);
		fflush(stdin);
	}
	for(i=0;i<15;i++){
		for(j=0;j<10;j++){
			if(palavras[i][j]=='\0'){
				break;
			}else{
				printf("%c",palavras[i][j]);
			}
		}
		printf("\n");
	}	
	return 0;
}

#include <stdio.h>

int main (void){
	char sexo;
	printf("Digite o sexo (f/m): ");
	scanf("%c",&sexo);
	fflush(stdin);
	if(sexo == 'f' || sexo == 'F'){
		printf("feminino");
	}else if(sexo =='m' || sexo == 'M'){
		printf("masculino");
	}else{
		printf("invalido");
	}
	return 0;
}

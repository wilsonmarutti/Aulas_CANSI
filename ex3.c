/*
3. Faça um programa que leia dez números inteiros e calcule a diferença 
entre o maior e o menor número do conjunto.
*/
#include <stdio.h>

int main (void){
	int i, maior, menor, num, dif;
	
	for(i=1;i<=10;i++){
		printf("Digite %i numero: ",i);
		scanf("%i",&num);
		fflush(stdin);
		if(i==1){
			maior=num;
			menor=num;
		}else{
			if(num>maior){
				maior=num;
			}
			if(num<menor){
				menor=num;
			}
		}
	}
	
	dif = maior - menor;

	printf("A diferenca e %i",dif);
	
	return 0;
}

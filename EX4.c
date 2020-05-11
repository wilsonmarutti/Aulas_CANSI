#include <stdio.h>

int main (void){
	char c[10];
	int i, quantidade_consoantes=0;
	
	for(i=0;i<10;i++){
		printf("Digite a %i caracter: ",i+1);
		scanf("%c",&c[i]);
		fflush(stdin);
	}
	for(i=0;i<10;i++){
		if (c[i]>='A' && c[i]<='Z'){
			c[i]=c[i]+('a'-'A');
		}
		
		if((c[i]>='a' && c[i]<='z')){
			if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u'){
				
			}else{
				quantidade_consoantes++;
			}
		}
	}
	
	printf("A quantidade de consoante e %i\n",quantidade_consoantes);
	printf("As consoantes sao: ");
	for(i=0;i<10;i++){
		if((c[i]>='a' && c[i]<='z')){
			if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u'){
				
			}else{
				printf("%c, ",c[i]);
			}
		}
	}
	return 0;
}

#include <stdio.h>

int main (void){
	char l;
	printf("Digite uma letra: ");
	scanf("%c",&l);
	fflush(stdin);
	if(l>='A'&& l<='Z'){
		l=l+('a'-'A');
	}
	if(l>='a' && l<='z'){
		if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u'){
			printf("vogal");
		}else{
			printf("consoante");
		}
	}else{
		printf("nao e uma letra");
	}
	return 0;
}

/*
4) Fa�a um programa que leia a idade de quatro alunos e apresente a mensagem conforme instru��es: 
a) Se a m�dia de idade dos alunos � inferior de 25, apresentar a mensagem "Turma Jovem"; 
b) Se a m�dia de idade dos alunos � entre 25 e 40, apresentar a mensagem "Turma Adulta"; 
c) Se a m�dia de idade dos alunos � acima de 40 anos, apresentar a mensagem "Turma Idosa". 
*/

#include <stdio.h>

int main (void){
	int media, id1,id2,id3,id4;	
	printf("Informe sua idade: ");
	scanf("%i",&id1);
	fflush(stdin);
	printf("Informe sua idade: ");
	scanf("%i",&id2);
	fflush(stdin);
	printf("Informe sua idade: ");
	scanf("%i",&id3);
	fflush(stdin);
	printf("Informe sua idade: ");
	scanf("%i",&id4);
	fflush(stdin);
	media = (id1+id2+id3+id4)/4;
	printf("Media de:%i\n ",media);
	if(media<=25){
		printf("Turma Jovem");
	}else if(media>=26 && media<=40){
		printf("Turma Adulta");
	}else if(media>40){
		printf("Turma Idosa");
	}else{
		printf("Valor invalido");	
	}
}

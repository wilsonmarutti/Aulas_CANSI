/*
Faça um programa que leia um número e exiba o dia correspondente da semana. 
(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
*/
#include <stdio.h>


int main (void){
    int sem;
    printf("Escolha um dia da semana. Ex:1-Domingo, 2- Segunda..  \n");
    scanf("%i",&sem);
    fflush(stdin);
    switch (sem){
        case 1:
             printf("Domingo");
             break;
        case 2:
             printf("Segunda-feira");
             break;
        case 3:
             printf("Terça-feira");
             break;   
        case 4:
             printf("Quarta-feira");
             break;   
        case 5:
             printf("Quinta-feira");
             break;   
        case 6:
             printf("Sexta-feira");
             break;   
		case 7:
             printf("Sabado");
             break;   	         
        default:
             printf("Não existe mais que 7 dias na semana.\n");
    }
    getch();
}


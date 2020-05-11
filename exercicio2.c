/*
Faça um programa que pergunte em que turno você estuda. 
Peça para digitar M-matutino ou V-Vespertino ou N-Noturno. 
Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! ou Valor Inválido!, conforme o caso.
*/


#include <stdio.h>


int main (void){
    char tur;
    printf("Escolha uma opcao:\n");
    printf(" M - Matutino\n");
    printf(" V - Vespertino\n");
    printf(" N - boa noite\n\n");
    scanf("%c",&tur);
    fflush(stdin);
    switch (tur){
        case 'M':
             printf("Bom dia");
             break;
        case 'V':
             printf("Boa tarde");
             break;
        case 'N':
             printf("boa noite");
             break;           
        default:
             printf("Opcao errada\n");
    }
    getch();
}


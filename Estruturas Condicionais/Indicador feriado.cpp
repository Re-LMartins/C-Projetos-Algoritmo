/*Escreva um programa em linguagem C leia um número, entre 1 e 7, correspondente ao
um dia da semana (1 para domingo, 2 para segunda, etc.),*/

#include<stdio.h>

int main() {
    int dsem = 0;

    printf("Digite um numero referente ao dia da semana: ");
    scanf("%i",&dsem);

    switch (dsem)
    {
    case 2:
        printf("Dia de semana");
        break;
    case 3:
        printf("Dia de semana");
        break;
    case 4:
        printf("Dia de semana");
        break;
    case 5:
        printf("Dia de semana");
        break;
    case 6:
        printf("Dia de semana");
        break;
    default:
        if(dsem == 1 || dsem == 7){
            printf("Final de semana");
            break;
        }
        
        printf("Valor invalido");
        break;
    }

    return 0;
}

/*programa em linguagem C leia um número, entre 1 e 7, correspondente ao
um dia da semana (1 para domingo, 2 para segunda, etc.),*/

#include<stdio.h>
#include<ctype.h>
int main(){
char letra;
printf("Digite uma letra: ");
scanf("%c",&letra);

switch (letra)
{
case 'a':
case 'A':
    printf("O caractere digitado e uma vogal");
    break;
case 'e':
case 'E':
    printf("O caractere digitado e uma vogal");
    break;
case 'i':
case 'I':
    printf("O caractere digitado e uma vogal");
    break;
case 'o':
case 'O':
    printf("O caractere digitado e uma vogal");
    break;
case 'u':
case 'U':
    printf("O caractere digitado e uma vogal");
    break;

default:
    if (isdigit(letra) || !isalpha(letra))
    {
    printf("O caractere digitado nao faz parte do alfabeto");
    }
    else{
    printf("O caractere digitado e uma consoante");

    }
    
    break;
}
return 0;
}

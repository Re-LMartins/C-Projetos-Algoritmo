/*programa em linguagem C que leia um número inteiro e como saída
imprime se este número é ou não primo.*/

#include<stdio.h>

int main(){

int ValA = 0;
int d = 0;


printf("Digite um valor: ");
scanf("%d" ,&ValA);



for (int i = 1; i <= ValA; i++)
{
if (ValA % i == 0)
{
    ++d;
}



}
if (d == 2)
{
printf(" %d e um numero primo",ValA);
}
else
{
printf(" %d nao e um numero primo",ValA);
}
    return 0;
}

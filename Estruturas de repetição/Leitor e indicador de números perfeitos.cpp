/*programa em linguagem C que leia um n�mero inteiro e como sa�da
imprime se este n�mero � ou n�o perfeito.*/
#include<stdio.h>

int main(){
int ValA = 0;
int D = 0;
printf("Digite um valor: ");
scanf("%d",&ValA);
for (int i = 1; i <= ValA; i++)
{
if (ValA % i == 0)
{
    D = i + D;
}
}
if (ValA*2 == D && ValA>0)
{
printf(" %d e perfeito",ValA);
}
else
{
printf(" %d nao e perfeito",ValA);
}





    return 0;
}

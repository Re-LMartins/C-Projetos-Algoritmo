/*três números inteiros positivos, calcule
e imprima o MMC (Mínimo Múltiplo Comum) e MDC (Maior Divisor Comum) dos
números informados.*/

#include<stdio.h>

int main(){
 
 int a = 0;
 int b = 0;
 int c = 0;
 int mmc = 1;
 int mdc = 1;
 int i = 2;

printf("Insira tres numeros: ");
scanf("%d %d %d",&a,&b,&c);


while (a+b+c != 3)
{

while((a % i == 0) || (b % i == 0) || (c % i == 0))
{
    if ((a % i == 0) && (b % i == 0) && (c % i == 0))
    {
    mdc=mdc*i;   
    }
    if (a % i == 0)
    {
    a= a / i;
    }
    if (b % i == 0)
    {
    b= b / i;  
    }
    if (c % i == 0)
    {
    c= c / i;
    }
    printf("%d ",a);
    printf("%d ",b);
    printf("%d ",c);
    printf(": %d\n",i);
    mmc=i*mmc;
    }
    i=i+1;
    
}
    printf("O MMC e o MDC dos tres valores sao: %d %d",mmc,mdc);

    

    return 0;
}

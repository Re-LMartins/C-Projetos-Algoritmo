/*programa em linguagem C que possui uma função que receba dois
números inteiros positivos (n, m) e calcula a potência dos números na base nm.*/

#include <stdio.h>

int Res, a,b;

int pot(int n, int m)
{
    int res;
    res=n;
    for(int i=1; i<m; i++)
    {
        res = n*res;
    }
    if(m==0)
    {
        res=1;
    }
    return res;
}

int main(void)
{
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("A potencia de %d elevado a %d eh igual a: %d",a,b,pot(a,b));
    return 0;
}

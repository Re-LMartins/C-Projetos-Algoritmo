/*programa em linguagem C que simule uma calculadora que efetua as
quatro operações básicas: adição, subtração, multiplicação e divisão.*/

#include<stdio.h>

int main() {
int v1;
int v2; 
char conta;
float vtotal;

printf("digite o primeiro valor: ");
scanf("%i" ,&v1);
printf("digite o segundo valor: ");
scanf("%i" ,&v2);
printf("digite a operacao desejada:\n+ = adicao\n- = subtracao\n* = multiplicacao\n/ = divisao\noperacao: ");
scanf(" %c" ,&conta);
switch (conta)
{
case '+':
    vtotal = v1+v2;
    printf("a soma de %i + %i e igual a %i" ,v1,v2,(int)vtotal);
    break;

case '-':
    vtotal = v1-v2;
    printf("a subtracao de %i - %i e igual a %i" ,v1,v2,(int)vtotal);
    break;

case '*':
    vtotal = v1*v2;
    printf("a multiplicacao de %i * %i e igual a %i" ,v1,v2,(int)vtotal);
    break;

case '/':
    if (v2 != 0)
    {
    vtotal = v1/v2;
    printf("a multiplicacao de %i / %i e igual a %f" ,v1,v2,vtotal);
    break;
    }
    printf("Nao e possivel realizar divisoes com o denominador 0");
    break;

default:
    printf("operador invalido");
    break;
} 
return 0;
}

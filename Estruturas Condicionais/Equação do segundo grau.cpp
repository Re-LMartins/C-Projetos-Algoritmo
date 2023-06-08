/*programa em linguagem C que leia os coeficientes a, b e c de uma equação
de segundo grau, calcule e exiba as suas raízes reais (caso existam). Caso não existam
raízes reais, o algoritmo deve exibir a mensagem: “A equação não possui raízes reais”.*/

#include<stdio.h>
#include<math.h>
int main(){
int a,b,c = 0;
double delta = 0.0;
int xone= 0;
int xtwo= 0;
double rdelta= 0.0;
printf("digite o valor da variavel a: ");
scanf("%i", &a);
printf("digite o valor da variavel b: ");
scanf("%i", &b);
printf("digite o valor da variavel c: ");
scanf("%i", &c);

if (a != 0)
{
    delta = pow(b,2)-(4*a*c);
    rdelta = sqrt(delta);
    xone=(-b+rdelta)/2*a;
    xtwo=(-b-rdelta)/2*a;
    if(rdelta == 0){
    printf("A equacao possui apenas uma raiz real que e: %i" ,xone);
    
    }
    else if(rdelta < 0){
    printf("A equacao nao possui raizes reais");
    }
    else if (fmod(rdelta,1)==0)
    {

    printf("As raizes reais sao: %i e %i",xone,xtwo);
    }
    else
    {
    printf("A equacao nao possui raizes reais");    
    }
    
}
else{
printf("Os coeficientes nao fazem parte de uma equacao do segundo grau");
} 

    return 0 ;
}

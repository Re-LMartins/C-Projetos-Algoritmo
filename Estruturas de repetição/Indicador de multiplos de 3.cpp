/*programa em linguagem C que leia dois números inteiros positivos e
imprima os números múltiplos de 3 existentes entre eles.*/

#include<stdio.h>

int main(){

int val1,val2;
int valM = 0;
int maiorV;
int menorV;



printf("Digite dois valores: ")/
scanf("%d %d",&val1,&val2);



if(val1>val2)
{
maiorV=val1;
menorV=val2;
}
else{
maiorV=val2;
menorV=val1;
}
printf("Os multiplos de 3 existentes entre %d e %d sao:\n",val1,val2);

while (valM <= maiorV)
{
valM=menorV;
if(valM % 3 == 0)    
{
printf("%d ",valM);    
}
menorV = menorV+1;
}




    return 0;
}

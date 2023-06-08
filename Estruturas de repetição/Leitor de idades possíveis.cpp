/*programa em linguagem C que leia um número indefinido de idades. O
algoritmo deve ser interrompido quando for digitado o valor 0*/

#include<stdio.h>
#include<stdlib.h>
int main(){

int ms10= 0;
int idD=1;
int maioridade= 0;
int maiI= 0;
float mediaI= 0;
int somaI=0;
int vezes=0;



while (idD != 0)
{
printf("digite uma idade: ");
scanf(" %d",&idD);




if (idD < 10)
{
ms10++;
}
if (idD >= 18)
{
maioridade++;
}
if (idD > maiI)
{
maiI=idD;
}
++vezes;
somaI+=idD;
mediaI=(float)somaI/((float)vezes-1);

}





printf("%d dessas pessoas possuem de 10 anos\n",ms10);
printf("%d pessoas possuem maioridade civil\n",maioridade);
printf("A maior idade e %d\n",maiI);
printf("a media das idades e: %.2f",mediaI);

    return 0;
}

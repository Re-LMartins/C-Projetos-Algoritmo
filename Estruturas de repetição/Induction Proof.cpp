/* Programa em linguagem C para realizar o calculo de uma s�ria de indu��o mat�matica */
#include <stdio.h>
#include <math.h>
int main(){
int numeroa;
float numeros;
float numerod;
int i = 0;
printf("Digite um numero: ");
scanf("%d", &numeroa);
for (int n = 1;n <= numeroa; n++)
{ 
  i=i+1;
  numeros=((2*(float)i)-1)/(float)i;
  printf("Termo resultante %d: %.5f \n" ,n,numeros);
  numerod = numeros + numerod;
}
  printf("A serie resulta em: %.5f",numerod);





    return 0;
}

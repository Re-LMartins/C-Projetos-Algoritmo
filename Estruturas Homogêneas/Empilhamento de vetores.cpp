/*programa em linguagem C que leia números inteiros positivos, armazene-
os em um vetor, com dez posições, e realize as operações de empilhar, desempilhar e
exibir uma pilha.*/

#include<stdio.h>


int v1[10];
int numeroDigitado = 0;
int numeroAux;
int numeroTopo = 9;
int main(){

printf("digite os valores do seu vetor: \n");
for (int i = 0; i < 10; i++)
{
scanf("%d" ,&v1[i]);
}


while (numeroDigitado != 4)
{

printf("escolha a operacao a ser realizada: \n1-Empilhar\n2-Desempilhar\n3-Ver valor do topo\n4-Sair\n");
scanf("%d",&numeroDigitado);

if (numeroDigitado != 4)
{
    if (numeroDigitado == 1)
    {
    printf("digite o valor a ser empilhado:\n");

        if(numeroTopo == 9){
        scanf("%d" ,&v1[numeroTopo]);
        }

        else{
        numeroTopo=numeroTopo+1;
        scanf("%d" ,&v1[numeroTopo]);
        }
        }
    if (numeroDigitado == 2)
    {
    numeroTopo=numeroTopo-1;
    printf("Ultimo valor desempilhado\n");
    }
    if (numeroDigitado == 3)
    {
    printf("O Topo esta na %d posicao e seu valor e %d\n",numeroTopo+1,v1[numeroTopo]);
    }

}
}


return 0 ;    
}

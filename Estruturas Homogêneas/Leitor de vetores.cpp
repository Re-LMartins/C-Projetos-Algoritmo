/* programa em linguagem C que leia dois vetores de inteiros, um com dez
posições e o segundo com duas.*/

#include <stdio.h>


int main()
{
    int vA[10];
    int vB[2];
    int i; 
    int j;
    int auxiliar1 = 0; 
    int auxiliar2 = 1; 
    int cont = 0;
    
    printf("Digite os valores do vetor A: \n");
    for(i = 0; i < 10; i ++)
    {
        scanf("%d", &vA[i]);
    }
    printf("Digite os valores do vetor B: \n");
    for(j = 0; j < 2; j ++)
    {
        scanf("%d", &vB[j]);
    }
    for (int i = 0; i < 10 ; i++)
    {
        if(vA[i]==vB[0]){
            if (vA[i+1]==vB[1])
            {
            cont++;
            }
            
        }
    }

    if(cont >= 1){

        printf("O vetor 2 ocorre %d vezes no vetor A \n", cont);
    }
    else{ 
    printf("O vetor 2 nao ocorre nenhuma vez no vetor A \n");
    }
    return 0;
}

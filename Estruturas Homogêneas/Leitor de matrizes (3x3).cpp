/*programa em linguagem C que leia uma matriz de inteiros de ordem 3x3 e
verifique e imprima se ela é um quadrado mágico.*/

#include <stdio.h>

int main()
{

    int matriz[3][3];
    int somaL1, somaL2, somaL3, somaC1, somaC2, somaC3, somaDia, somaDiaIn, somaI;

    for(int i=0; i< 3; i++){
        for(int j=0; j<3; j++)
        {

            printf("Digite os valores da matriz [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    somaL1=(matriz[0][0])+(matriz[0][1])+(matriz[0][2]);
    somaL2=(matriz[1][0])+(matriz[1][1])+(matriz[1][2]);
    somaL3=(matriz[2][0])+(matriz[2][1])+(matriz[2][2]);

    somaC1=(matriz[0][0])+(matriz[1][0])+(matriz[2][0]);
    somaC2=(matriz[0][1])+(matriz[1][1])+(matriz[2][1]);
    somaC3=(matriz[0][2])+(matriz[1][2])+(matriz[2][2]);

    somaDia=(matriz[0][0])+(matriz[1][1])+(matriz[2][2]);
    somaDiaIn=(matriz[0][2])+(matriz[1][1])+(matriz[2][0]);

    if((somaL1==somaL2)&&(somaL1==somaL3)&&(somaL1==somaC1)&&(somaL1==somaC2)&&(somaL1==somaC3)&&(somaL1==somaDia)&&(somaL1==somaDiaIn))
    {
        printf("A matriz eh um quadrado magico\n");
    }
    else
    {
        printf("A matriz nao eh um quadrado magico");
    }
    return 0;
}

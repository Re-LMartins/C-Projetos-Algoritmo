/*programa em linguagem C que leia duas matrizes de inteiros, a primeira de
ordem 4x2 e a segunda 2x3.*/

#include <stdio.h>

int matriz[4][2];
int matriz1[2][3];
int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;


int main()
{
printf("Informe os valores da matriz 4X2 \n");
    for(int i=0; i< 4; i++)
        for(int j=0; j<2; j++)
        {
            printf("Digite os valores da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    printf("Informe os valores da matriz 2X3 \n");
    for(int i=0; i< 2; i++)
        for(int j=0; j<3; j++)
        {
            printf("Digite os valores da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }

    s1= (matriz[0][0]*matriz1[0][0]+matriz[2][0]*matriz1[0][1]);
    s2= (matriz[0][0]*matriz1[0][2]+matriz[2][0]*matriz1[1][0]);
    s3= (matriz[0][0]*matriz1[1][1]+matriz[2][0]*matriz1[1][2]);
    s4= (matriz[0][1]*matriz1[0][0]+matriz[2][1]*matriz1[0][1]);
    s5= (matriz[0][1]*matriz1[0][2]+matriz[2][1]*matriz1[1][0]);
    s6= (matriz[0][1]*matriz1[1][1]+matriz[2][1]*matriz1[1][2]);
    s7= (matriz[1][0]*matriz1[0][0]+matriz[3][0]*matriz1[0][1]);
    s8= (matriz[1][0]*matriz1[0][2]+matriz[3][0]*matriz1[1][0]);
    s9= (matriz[1][0]*matriz1[1][1]+matriz[3][0]*matriz1[1][2]);
    s10= (matriz[1][1]*matriz1[0][0]+matriz[3][1]*matriz1[0][1]);
    s11= (matriz[1][1]*matriz1[0][2]+matriz[3][1]*matriz1[1][0]);
    s12= (matriz[1][1]*matriz1[1][1]+matriz[3][1]*matriz1[1][2]);
    printf("  A matriz resultante eh\n [%d %d %d] \n",s1,s2,s3);
    printf(" [%d %d %d] \n",s4,s5,s6);
    printf(" [%d %d %d] \n",s7,s8,s9);
    printf(" [%d %d %d] \n",s10,s11,s12);
    printf(" A matriz transposta de A eh: \n");
    printf(" [%d %d %d %d] \n", matriz[0][0], matriz[0][1], matriz[1][0],matriz[1][1]);
    printf(" [%d %d %d %d] \n", matriz[2][0], matriz[2][1], matriz[3][0],matriz[3][1]);
    printf("  A matriz transposta de B eh: \n");
    printf(" [%d %d] \n", matriz1[0][0], matriz1[0][1]);
    printf(" [%d %d] \n", matriz1[0][2], matriz1[1][0]);
    printf(" [%d %d] \n", matriz1[1][1], matriz1[1][2]);
    return 0;
}

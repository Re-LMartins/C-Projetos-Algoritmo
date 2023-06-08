/*programa em linguagem C leia dois vetores ordenados, com cinco
posições cada, e mescle-os em um terceiro vetor.*/

#include <stdio.h>


int numeroAux;
int v1[5];
int v2[5];
int v3[10];

int main(){
printf("Digite os valores do primeiro vetor: \n");
    
    for (int i = 0; i < 5; i++)
    {
    scanf("%d", &v1[i]);
    }

printf("Digite os valores do segundo vetor: \n");
    for (int i = 0; i < 5; i++)
    {
    scanf("%d", &v2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
    v3[i]=v1[i];
    }
    for (int i = 5; i < 10; i++)
    {
    v3[i]=v2[i-5];  
    }

    for(int j=0; j < 10; j++){
        for(int i=0; i < 10 -1; i++){
            if(v3[i] > v3[i+1]){
            numeroAux = v3[i];
            v3[i] = v3[i+1];
            v3[i+1] = numeroAux;
            }
        }

    }
 
printf("Os valores do terceiro vetor sao: \n");
    
    for (int i = 0; i < 10; i++)
    {
    printf("%d " ,v3[i]);
    }

    return 0;
}

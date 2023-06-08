/*programa em linguagem C que leia um vetor de cinco caracteres e como
saída imprime se o vetor é ou não um palíndromo.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[5];
    int i, j, auxiliar = 0;

    printf("Escreva uma palavra que contenha no maximo 5 carcteres: \n");
    scanf("%s", palavra);
    j = strlen(palavra);
    j--;
    i=0;
    while(j >= i)
    {
        if(palavra[i] != palavra[j])
            auxiliar=1;
        i++;
        j--;
    }
    if(auxiliar == 0){
        printf("A palavra e palindroma \n");
    }
    else{ 
    printf("A palavra nao e palindroma \n");
    }
    return 0;
}

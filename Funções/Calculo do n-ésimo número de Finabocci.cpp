/*programa em linguagem C que possui uma função que receba um número
inteiro positivo e calcula o n-ésimo número da sequência Fibonacci*/

#include <stdio.h>


int main ()
{
    int i, sequencia;
    int resultado, anterior, anterior2;

    printf("Digite quantos numeros voce ira querer na sequencia de Fibonnacci:\n");
    scanf("%d", &sequencia);

    anterior = 1;
    anterior2 = 1;
    printf("1 - %d\n", anterior);
    printf("2 - %d\n", anterior2);
    for(i = 3; i <= sequencia; i++)
    {
        resultado = anterior + anterior2;
        anterior = anterior2;
        anterior2 = resultado;

        printf("%d - %d\n", i, resultado);
    }
    return 0;
}

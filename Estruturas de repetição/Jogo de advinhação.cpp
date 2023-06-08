/*programa em linguagem C que simule um jogo de adivinhação. O
algoritmo deve calcular um número aleatório*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL));
int numeroaleatorio = rand() % 100 + 1;
int numerodigitado = 0;
int numeromenor = 1;
int numeromaior = 100;

for (int i = 6; i >= 0; i--){
    if (i != 0)
    {
    printf("Escreva um numero entre %d e %d: ",numeromenor,numeromaior);
    scanf("%d" ,&numerodigitado);

    if (numerodigitado == numeroaleatorio)
    {
    printf("Game Over, voce acertou o numero escolhido:");
    printf("\nNumero aleatorio: %d",numeroaleatorio);
    printf("\nNumero de tentativas restantes: %d",i);
    break;
    }
    else{
    if (numerodigitado > numeroaleatorio)
    {
    numeromaior = numerodigitado;
    }
    if (numerodigitado < numeroaleatorio)
    {
    numeromenor = numerodigitado;
    }
    if ((numeromenor + 1 == numeroaleatorio) && (numeromaior - 1 == numeroaleatorio) )
    {
    printf("Parabens, voce imprensou o numero escolhido");
    printf("\nNumero aleatorio: %d",numeroaleatorio);
    printf("\nNumero de tentativas restantes: %d",i);
    break;
    }
    }
    }
    else{
    printf("Game over, voce ultrapassou o limite de tentativas");
    printf("\nNumero aleatorio: %d",numeroaleatorio);
    }
    }


    return 0;
}

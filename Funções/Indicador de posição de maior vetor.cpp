/*programa em linguagem C que possui uma função que receba um vetor de
double, um número inteiro para indicar o tamanho do vetor e um número índice que
deve ser passado por referência.*/

#include <stdio.h>
 
#define TAM 5 
 
int main() {
  double vet[TAM], maiorv;
  int i, maiorpos;

  printf("Informe os valores dos vetores: \n");

  for (i = 0; i < TAM; i++) {
    scanf("%lf", &vet[i]);
  }

  maiorv = vet[0];
  maiorpos = 0;
  for (i = 1; i < TAM; i++) {
    if (vet[i] > maiorv) {
    maiorv = vet[i];
    maiorpos = i;
    }
  }

  printf("O maior valor e: %0.2lf, na posicao %i. \n", maiorv, maiorpos+1);

  return 0;
}

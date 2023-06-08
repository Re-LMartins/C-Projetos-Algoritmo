/*programa em linguagem C que possui uma função que calcula o número
de combinações possíveis de m elementos em grupos de n elementos.*/

#include <stdio.h>

int main(void) {
  int m, n, fatm, fatn,fatj;

  printf("Digite os valores de M e N, na ordem: \n");
  scanf("%d%d",&m,&n); 

  int j =m-n; 
  for(fatj = 1; j>1; j = j-1)
  fatj = fatj * j;

  for(fatm = 1; m > 1; m = m - 1)
  fatm = fatm * m;

  for(fatn = 1; n>1; n = n-1)
  fatn = fatn * n; 

  int cm=fatm , cmn=fatj, cn=fatn, resultado, rfinal;
  resultado = fatj*fatn;

  rfinal = fatm / resultado;

  printf("Temos %d possiveis combinacoes", rfinal);
  
  return 0;
}

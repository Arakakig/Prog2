#include <stdio.h>

/* Recebe por refer�ncia dois inteiros a e b e troca seus valores */
void troca(int *a, int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

/* Recebe um par de n�meros inteiros p e r, com p <= r e um vetor v[p..r]
   de n�meros inteiros e rearranja seus elementos e devolve um n�mero in-
   teiro j em p..r tal que v[p..j] <= v[j+1..r], utilizando a mediana de
   3 como forma de escolha do piv�.
   
   **ESTA � A VERS�O PADR�O DA FUN��O COM ESCOLHA DE v[p] COMO PIV�.**
   **MODIFIQUE-A PARA REALIZAR A ESCOLHA DO PIV� DESCRITA NO ENUNCIADO.**
*/


int separa(int p, int r, int v[])
{
  int x, i, j;
  x = v[p];
  i = p - 1;
  j = r + 1;
  while (1) {
    do {
      j--;
    } while (v[j] > x);
    do {
      i++;
    } while (v[i] < x);
    if (i < j)
      troca(&v[i], &v[j]);
    else
      return j;
  }
}


/* Recebe um vetor v[p..r] e o rearranja em ordem crescente.
   **N�O ALTERE NADA NESSA FUN��O** */
void quicksort(int p, int r, int v[])
{
  int q;
  if (p < r) {
    q = separa(p, r, v);
    quicksort(p, q, v);
    quicksort(q+1, r, v);
  }
}

/* Recebe um n�mero inteiro n > 0, e uma sequ�ncia
   de n n�meros inteiros e escreve a sequ�ncia ordenada.
   **N�O ALTERE NADA NA MAIN** */
int main(void)
{
  int n,i;
  scanf("%d", &n);
  int v[n];
  for (i = 0; i < n; i++)
    scanf("%d", &v[i]);
  quicksort(0, n-1, v);
  for (i = 0; i < n; i++)
    printf("%d ", v[i]);
  printf("\n");
  return 0;
}


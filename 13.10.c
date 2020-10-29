#include <stdio.h>
#include <string.h>
#define MAX 10
int main( int argc, char *argv[ ] )
{
  int soma=0, numeros[MAX],i;
  for (i = 1; i < argc; i++) {
  	numeros[i] = atoi(argv[i]);
  	soma+=numeros[i];
  }
  printf("%d", soma);
}

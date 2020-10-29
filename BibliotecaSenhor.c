#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void troca(int *a, int *b)
{
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}
void selectionsort(int n, int v[])
{
  int i, j, min;
  for (i = 0; i < n - 1; i++) {
    min = i;
    for (j = i+1; j < n; j++)
      	if (v[j] < v[min])
	min = j;
    troca(&v[i], &v[min]);
  }
}
int main() {
 
   int n,aux;
   while(scanf("%d",&n)!=EOF){
   int v[n];
   for(aux=0;aux<n;aux++){
   	scanf("%d",&v[aux]);
   }
  selectionsort(n,v);
   for(aux=0;aux<n;aux++){
   	 printf("%04d\n", v[aux]);	
   }
}
    return 0;
}

#include <stdio.h>
// Escreva aqui sua função. Você pode alterar o nome se quiser, e nesse caso
// alterar a chamada da função na main. Caso ache necessário, você pode criar
// funções adicionais para auxiliar na resolução do problema
void ordena_vetor(int n, int v[])
{
  int i, j, min,aux[n],aux1;
  for(aux1=0;aux1<n;aux1++){
  	  
	  if(v[aux1]>=100){
	  	aux[aux1]=aux[aux1]%100;
	  	aux[aux1]=aux[aux1]%10;
	  }
	  if(v[aux1]>=10){
	  	aux[aux1]=v[aux1]%10;
	  }
  }
  for (i = 0; i < n - 1; i++) {
    min = i;
    for (j = i+1; j < n; j++)
      if (aux[j] < aux[min])
		min = j;
	 if (aux[j] = aux[min]){
		min = j;
		if(v[aux1]>=100){
	  	aux[aux1]=v[aux1]/100;
	  	aux[aux1]=aux[aux1]%10;
	 	 }
	  	if(v[aux1]>=10){
	  	aux[aux1]=v[aux1]/10;
	  	}
	}
    troca(&v[i], &v[min]);
}
}

// Altere na função main apenas o nome da função chamada, 
// conforme você definir acima, NÃO altere outras coisas
void troca(int *a, int *b)
{
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

int main(void)
{
    int n,i;
    scanf("%d", &n);
    int v[n];
    for (i = 0; i < n; i++){
        scanf("%d", &v[i]);
	}
    	ordena_vetor(n, v);
    
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    
    return 0;
}


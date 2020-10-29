#include <stdio.h>
#include <stdlib.h>
void trocas_sucessivasPares(int tamanhoPares,int pares[])
{
    int i, j;
  	for (i = tamanhoPares- 1; i > 0; i--){
    for (j = 0; j < i; j++){
      if (pares[j] > pares[j+1]){
		   int aux;
  			aux = pares[j];
  			pares[j] = pares[j+1];
  			pares[j+1] = aux;

	  		}	    
		}
	  }
}
void trocas_sucessivasImpares(int tamanhoImpares,int impares[])
{	
	int i, j;
  	for (i = tamanhoImpares- 1; i > 0; i--){
    for (j = 0; j < i; j++){
      if (impares[j] < impares[j+1]){
		   int aux;
  			aux = impares[j];
  			impares[j] = impares[j+1];
  			impares[j+1] = aux;

	  		}	    
		}
	  }

  }
  
int main ()
{

	int casos, numero, tamanhoPares = 0, tamanhoImpares = 0;
	int i = 0, j = 0;

	scanf("%d", &casos);
	int impares[casos], pares[casos];

	while (casos--)
	{
		scanf("%d", &numero);

		if (numero % 2 == 0)
		{	
			tamanhoPares++;
			pares[i++] = numero;
		}
		else
		{	
			tamanhoImpares++;
			impares[j++] = numero;
		}
	}
	trocas_sucessivasImpares(tamanhoImpares,impares);
	trocas_sucessivasPares(tamanhoPares,pares);
	for(i=0;i<tamanhoPares;i++){
		printf("%d\n",pares[i]);
	}
	for(i=0;i<tamanhoImpares;i++){
		printf("%d\n",impares[i]);
	}

	
}
		

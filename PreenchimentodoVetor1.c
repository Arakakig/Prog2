#include <stdio.h>
 
int main() {
 
    int vetor[10];
    int aux;
    scanf("%d",&vetor[0]);
    for(aux=1;aux<10;aux++){
    	vetor[aux]=2*vetor[aux-1];
	}
	for(aux=0;aux<10;aux++){
    	printf("N[%d] = %d\n",aux,vetor[aux]);
	}
    return 0;
}

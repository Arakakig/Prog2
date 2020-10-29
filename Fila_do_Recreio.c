#include <stdio.h>
#include<stdbool.h>
#define max 100
int main() {
 
    int n, m,aux,aux1,aux2, notasA[max],notasB[max],contador=0;
    bool trocas;
    scanf("%d",&n);
    for(aux2=0;aux2<n;aux++){
    	scanf("%d",&m);
    	for(aux1=0;aux1<m;aux1++){
    		scanf("%d",&notasA[aux1]);
    		notasB[aux1]=notasA[aux1];
		}
	
	do{
		trocas = false;
		for(aux=0;aux<n;aux++){
		if(notasB[aux]<notasB[aux+1]){
			aux1=notasB[aux];
			notasB[aux]=notasB[aux+1];
			notasB[aux+1]=aux1;
			trocas = true;
		}
		}
	}while(trocas==true);
	for(aux=0;aux<m;aux++){
		if(notasA[aux]==notasB[aux]){
			contador++;
			}
		}
		printf("%d\n",contador);
		
	}
    return 0;
}

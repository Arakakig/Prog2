#include <stdio.h>
#define MAX 100
	int insere(int n, int v[MAX], int k, int y){
		int j;
		for(j=n;j>k;j--){
			v[j]=v[j-1];
		}
		v[k]=y;
		return n+1;
	}

	int insere_R(int n, int v[MAX], int k, int x){
		if(k==n){
			v[n]=x;
			return n+1;
		}
		else{
			int aux;
			aux=v[k];
			v[k]=x;
			return insere_R (n,v,k+1,aux);
		}
	}


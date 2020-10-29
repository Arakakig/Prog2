#include <stdio.h>
#include <conio.h>
#define MAX 100
//não recursiva 
	int remov(int n, int v[MAX], int x){
	
		int k;
		int aux[MAX];
		aux[MAX] = v[MAX];
		for (k = n - 1; k >= 0 ; k--){
		if(x==v[k]){
			while(v[k]<n-1){
		 	auxiliar[c]=auxiliar[c+1];
			c++;
  		}
			v[k]= -1;
		}
	}
			return n-1;
} 
//recursiva
	int remov_R(int n, int v[MAX],int x){
	
		if (x == v[n - 1]){
			v[]
			return n - 1;
		}
		else
		return remov_R(n - 1, v, x);
		} 
	int main() {
		int n,x,aux;	
		int v[MAX];
		scanf("%d",&n);
		for(aux=0;aux<n;aux++){
			scanf("%d",&v[aux]);
		}
		scanf("%d",&x);
		printf("%d",busca)
	 
 
    return 0;
}

#include <stdio.h>
#include <math.h>
	int potencia(int x, int n){
		int aux;
		if(n==0)
			return 1;
		else if(n%2==0){
			aux =  pow(x,n/2);
			return pow(aux,2);
		}
		else if(n%2!=0){
			return x*pow(x,n-1);
		}
	}
 	int main(){
 		int a,b;
 		scanf("%d %d", &a,&b);
 		printf("%d\n",potencia(a,b));
 		
 		return 0;
	 }

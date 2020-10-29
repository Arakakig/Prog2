#include <stdio.h>
#include <conio.h>
#define MAX 100
//não recursiva 
	int remov(int n, int v[MAX], int x){
	
		int k;
		for (k = n - 1; k >= 0 ; k--){
		if(x==v[k]){
			v[k]= -1;
			}
		}
			return n-1;
} 
//recursiva
	int remov_R(int n, int v[MAX],int x){
	
		if (x == v[n - 1]){
			v[n-1];
			return n - 1;
		}
		else
		return remov_R(n - 1, v, x);
		} 
	int main() {
		int n=0,x=6,aux;	
		int v[MAX] = {1,5,3,6};
		n=4;
		printf("%d\n",remov(n,v[MAX],x));
	 
 
    return 0;
}

#include <stdio.h>
 
int main() {
 
   int x,aux,soma=0,y=0;
 	for(soma=0;x!=0;y++) {
	scanf("%d",&x);
	soma=0;
	if(x==0)
	return 0;
	for(aux=0;aux<5;aux++){
		if(x%2==0&&x!=0)
		soma+= x+(2*aux);
		else if(x!=0){
		soma+=x+1+(2*aux);
		}
	}
   printf("%d\n",soma);
   
	} 
	return 0;
}

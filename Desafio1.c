#include <stdio.h>
 
int main() {
 
   int n, aux,alt,esp,gal;
   scanf("%d",&n);
   for(aux=0;aux<n;aux++){
   		scanf("%d",&alt);
   		scanf("%d",&esp);
   		scanf("%d",&gal);
   	if(alt>=200&&alt<=300&&esp>=50&&gal>=150){
   		printf("Sim\n");
	   }
	else
		printf("Nao\n");
   }
    return 0;
}

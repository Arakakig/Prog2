#include <stdio.h>
 
int main() {
 	int n[20];
 	int aux,aux1,aux2=19;
 	for(aux=0;aux<20;aux++){
 		scanf("%d",&n[aux]);
	 }
 	for(aux=0;aux<10;aux++,aux2--){
 		aux1=n[aux];
 		n[aux]=n[aux2];
 		n[aux2]=aux1;
	 }
	for(aux=0;aux<20;aux++){
		printf("N[%d] = %d\n",aux,n[aux]);
	}
 		
 
    return 0;
}

#include <stdio.h>
 
int main() {
 	int x[10];
 	int aux;
 	for(aux=0;aux<10;aux++){
 		scanf("%d",&x[aux]);
 		if(x[aux]<=0)
 			x[aux]=1;
	 }
	for(aux=0;aux<10;aux++){
 		printf("X[%d] = %d\n", aux,x[aux]);
	 }
    return 0;
}

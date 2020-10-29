#include <stdio.h>
 
int main() {
 
  	int n[10];
  	int d,aux,aux1=0;
  	scanf("%d",&d);
  	for(aux=0;aux<10;aux++){
  		if(aux1<d)
  			n[aux]=aux1;
		else{
			aux1=0;
			n[aux]=aux1;  
		}
		  printf("N[%d] = %d\n",aux,n[aux]);
		  aux1++;
		  
	}
  			

    return 0;
}

#include <stdio.h>
 
int main() {
 
   float a[10];
   int aux;
   for(aux=0;aux<10;aux++)
   		scanf("%f",&a[aux]);
   for(aux=0;aux<10;aux++){
   		if(a[aux]<=10)
		   printf("A[%d] = %.1f\n",aux,a[aux]);
}
    return 0;
}

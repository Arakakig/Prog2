#include <stdio.h>
 
int main() {
 
    double n[100];
    double a;
    int aux;
    scanf("%lf",&a);
    n[0]=a;
    for(aux=1;aux<100;aux++){
    	n[aux]=(n[aux-1]/2);
	}
	for(aux=0;aux<100;aux++){
		printf("N[%d] = %.4lf\n",aux,n[aux]);
	}
 
    return 0;
}

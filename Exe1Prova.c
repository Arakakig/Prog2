#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int contador=0;
int conta_dig_imp(n)
{	
	int base=1,numero,resto;
	if(n>=1000){
		base=1000;
		numero=n/base;
	}
	else if(n>=100){
		base=100;
		numero=n/base;
	}
	else if(n>=10){
		base=10;
		numero=n/base;
	}
	else 
		numero=n/base;
    if(numero%2==1||numero%2==-1){
    	contador++;
   	}
   	if(n<10){
   		return 1;
	   }
	else
	return conta_dig_imp(n%10);
}

int main(void){
	int n,aux;
	scanf("%d",&n);
	conta_dig_imp(n);
	printf("%d\n",contador);
}

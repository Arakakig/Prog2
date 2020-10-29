#include <stdio.h>
 
int main() {
 
	int x,y,aux,aux1=0;
	scanf("%d %d",&x,&y);
	for(aux=1;aux<=y;aux++){
			printf("%d",aux);
			aux1++;
			if(aux1==x){
			printf("\n");
			aux1=0;
			}
			else
				printf(" ");

		}
 
    return 0;
}

#include <stdio.h>
 
int main() {
 
	int x,y,aux,maior,menor;
	scanf("%d %d",&x,&y);
	maior=y;
	menor=x;
	if(x>y){
	maior=x;
	menor=y;
	}
	for(aux=menor+1;aux<maior;aux++)
	{
		if(aux%5==2||aux%5==3)
			printf("%d\n",aux);
	}
	
 
    return 0;
}

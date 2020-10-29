#include <stdio.h>
#include <stdlib.h>
int main() {
  int x, y,soma,aux,menor,maior;
  scanf("%d %d",&x,&y);
  menor=x;
  maior=y;
  soma=0;
  if(x>y){
  	maior=x;
  	menor=y;
  }
  for(aux=menor; aux<=maior;aux++){
  	if(aux%13!=0)
  		soma+=aux;
  }
  printf("%d\n",soma);
    return 0;
}

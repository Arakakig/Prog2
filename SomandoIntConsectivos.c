#include <stdio.h>
 
int main() {
 
   int a, n,aux,soma=0;
   scanf("%d",&a);
   scanf("%d",&n);
   while(n<=0)
   scanf("%d",&n);
   for(aux=1;aux<=n;aux++){
   	soma+=a;
   	a++;
   }
   printf("%d\n",soma);
    return 0;
}

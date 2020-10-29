#include<stdio.h>

int contador, chamadas;
int fibonacci(int num)
{
   if(num==0){
   	   chamadas++;
       return 0;
   }
    else if(num == 1){
            chamadas++;
            contador++;
            return 1;
        }
   else{
   	   contador++;
   	   chamadas++;
       return fibonacci(num-1) + fibonacci(num-2);
	}
}
int main()
{
   int n,i,j;
   scanf("%d", &j);
   for(i=1; i<=j; i++){
   	   scanf("%d", &n);
   	   contador = 0;
   	   chamadas = 0;
       printf("%d\n ", fibonacci(n));
       printf("%d\n", contador);
	}
   return 0;
}

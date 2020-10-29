#include <stdio.h>
#define MAX 100
void min_max(int n, int v[MAX], int *max, int *min)
{   int aux;
    *min= v[0];
    *max= v[0];
    for(aux=0;aux<n;aux++){
        if(*min>v[aux]){
            *min = v[aux];
        }
        if(*max<v[aux]){
            *max=v[aux];
        }
    }
	
}
int main(void)
{
int max, min, n, v[MAX],aux;
scanf("%d", &n);
for(aux=0;aux<n;aux++){
    scanf("%d",&v[aux]);
}
min_max(n,v,&max,&min);
printf("Maior = %d e Menor = %d\n", max, min);
return 0;
}

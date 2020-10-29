#include <stdio.h>
#define MAX 50
void trocas_sucessivas(int n, int v[MAX])
{
    int j,i=n,aux;
    if(i>0){
        for(j=0;j<n-1;j++){
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
        return trocas_sucessivas(n-1,v);
    }
    else {
        return;
    }
}

int main(){
    int n,a;
    int v[MAX];
    scanf("%d",&n);
    for(a=0;a<n;a++){
        scanf("%d",&v[a]);
    }
    trocas_sucessivas(n,v);
    for(a=0;a<n;a++){
        printf("%d\n",v[a]);
    }
}

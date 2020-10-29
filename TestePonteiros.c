#include <stdio.h>
#define N 1000
int main(void)
{
    char v[N], *p;
    int aux=0;
    for(p=&v[0]; p != '\n'; p++){
    *p = getchar();
    aux++;
    /*if(*p == '\n'){
        break;
    }*/
    }
    while(aux>=0){
        printf("%c",v[aux]);
        aux--;
    }
    
    return 0;
}

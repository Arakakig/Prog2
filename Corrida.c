#include <stdio.h>

int main() {
    int i, n,m;
    int maxv=0;
    int velocidades[100];

    scanf("%d", &n);

    /* guardamos as velocidades */
    for (i = 0; i < n; i++) {
        scanf("%d", &velocidades[i]);
    }
    
	// # descobrimos a velocidade limite para o evento
	scanf("%d", &m);
	
	if(m==1){
		for (i = 0; i < n; i++) {
		if(maxv<velocidades[i])
			maxv=velocidades[i];
		}
		printf("%d\n",&maxv);
	}
		
	else if(m==2){
		for (i = 0; i < n; i++) {
		if(maxv<velocidades[i])
			maxv=velocidades[i];
		}
		printf("%d\n",&maxv);
	}
	else if(m==3){
		for (i = 0; i < n; i++) {
			if(maxv<velocidades[i])
			maxv=velocidades[i];
			}
			printf("%d\n",&maxv);
		}
			
	
	
		
    }




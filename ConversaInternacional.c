#include <stdio.h>
#include <string.h> 
#include <stdbool.h>
int main() {
 	int n,aux,i,aux1;
 	int k;
 	bool a=true;
 	scanf("%d", &n);
 	char idioma[k][n];
 	for(aux=0; aux<=n; aux++){
 		scanf("%d",&k);
 		for(i=0; i<k;i++){
 			scanf("%s",&idioma[i][aux]);
 		}
 		for(aux1=0;aux1<k;aux1++){
 			if(idioma[aux1][aux]!=idioma[aux1+1][aux]&&idioma[aux1+1][aux]!= NULL)
 				a=false;
		 }
		 if(a==false)
		 	printf("ingles\n");
		else
			printf("%s\n",idioma[i]);
		}	
    return 0;
}

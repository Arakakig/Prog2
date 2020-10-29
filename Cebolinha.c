#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PALAVRA 20

void copiar_cebolinha(char original[], char nova[]) {
  int b=strlen(original);
  char auxiliar[b];
  int a;
  int c;
  for(a=0;a<b;a++)
  	auxiliar[a]= tolower(original[a]);
  	
  for(a=0;a<b;a++){
  	if(auxiliar[a]!='r')
  		nova[a]=auxiliar[a];
  	else if(auxiliar[a]=='r'&&auxiliar[a+1]=='r')
	  {
  		nova[a]='l';//3
  		c=a+1;
  		
  		while(c<b){
		  // churrasqueiro -> chulasqueiro;
  		auxiliar[c]=auxiliar[c+1];
		c++;
  		}
  		b=b-1;
		
  	}
  	else if(auxiliar[a]=='r')
  		nova[a]='l';
  	}
  	while(b<MAX_PALAVRA){
  		nova[b]= ' ';
  		b++;
	  }
  		
}
int main() {
  char palavra[MAX_PALAVRA];
  char palavra_modificada[MAX_PALAVRA];

  scanf("%s", palavra);
  copiar_cebolinha(palavra, palavra_modificada);
  printf("%s", palavra_modificada);

  return 0;
}

/**************************************************
*
* Guilherme Pecois Arakaki
* Trabalho 1
* Professor(a): Diego Padilha Rubert
*
*/

#include <stdio.h>
#define MAX 100
typedef struct {
		int numero; /* Numero da capivara = posicao na largada */
		int ultrapass; /* Quantidade de ultrapassagens feitas */
		} capivara;

void ordemTermino(capivara t[], int posicaoFinal[], int aux)
{
  int aux1, posicaoOndeEsta;
    for(posicaoOndeEsta=0;t[aux].numero!=posicaoFinal[posicaoOndeEsta];posicaoOndeEsta++){}//Ele busca o numero no vetor posicionaFinal, at� que aux=posicaoOndeEsta
	if(posicaoOndeEsta!=0){//Caso a posicao em que ele se encontra, n�o seja a primeira, o metodo faz a troca
		aux1 = posicaoFinal[posicaoOndeEsta];
  		posicaoFinal[posicaoOndeEsta] = posicaoFinal[posicaoOndeEsta-1];
  		posicaoFinal[posicaoOndeEsta-1] = aux1;
	}
}
/*void ordemUltrapass(int dim, int posicaoUltrapass[dim][dim], capivara v[])
{
  int i, j,aux;
  	for(aux=0;aux<dim;aux++){//Inicio o vetor posicaoUltrapass recebendo o numero de cada uma na ordem inicial;
		posicaoUltrapass[aux][1]= v[aux].numero ;
	}
	for(aux=0;aux<dim;aux++){//Inicio o vetor posicaoUltrapass recebendo o numero de ultrapassagens cada uma;
		posicaoUltrapass[aux][2]=v[aux].ultrapass;
	}
	for(aux=0;aux<dim;aux++){//Inicio o vetor posicaoUltrapass recebendo o numero de ultrapassagens cada uma;
		posicaoUltrapass[aux][3]=v[aux].numero;
	}
  	for(aux=0;aux<dim;aux++){//Gera a impressao da posicao da ultrapassagem
			printf("%i ", posicaoUltrapass[aux][1]);
		}
		printf("\n");
	for(aux=0;aux<dim;aux++){//Gera a impressao da posicao da ultrapassagem
			printf("%i ", posicaoUltrapass[aux][2]);
		}
	printf("\n");
	for (i = dim-1; i>0; i--){
	  //	for (j = 0; j < i; j++){
		 	if(posicaoUltrapass[i][2]>posicaoUltrapass[i-1][2]){
	
				aux = posicaoUltrapass[i-1][1];
	  			posicaoUltrapass[i-1][1] = posicaoUltrapass[i][1];
				posicaoUltrapass[i][1] = aux;
		  			
					}
			//}
			//posicaoUltrapass[]
		}
	for(aux=0;aux<dim;aux++){//Gera a impressao da posicao da ultrapassagem
			printf("%d ", posicaoUltrapass[aux][1]);
		}
	
}*/

int main(void){
	int numCapivaras, aux, auxUlt, posicaoFinal[MAX], posicaoUltrapass[MAX][3];
	capivara v[MAX];
	scanf("%d",&numCapivaras);//Primeira Linha a qual recebe o valor do numero de capivaras que irao entrar na corrida
	for(aux=0;aux<numCapivaras;aux++){
		v[aux].numero=aux+1;//Anotei o numero de cada capivara
		v[aux].ultrapass=0;//Declarei o valor inicial da ultrapassagem de cada capivara
		posicaoFinal[aux]=v[aux].numero;//Iniciei para a declaracao da posicao final de cada uma
	}
	
	while(scanf("%d",&auxUlt)!=EOF){//a variavel auxUlt recebe um valor enquanto ela for diferente de EOF
		for(aux=0;aux<numCapivaras;aux++){
			if(auxUlt==v[aux].numero){//a variavel compara com o numero de cada elemento do vetor 
				ordemTermino(v, posicaoFinal, aux);//Caso ela seja igual, ela executa a ordenacao
				v[aux].ultrapass= v[aux].ultrapass+1;//O ultrapass aumenta em 1
			}			
		}
	}
	/*for(aux=0;aux<numCapivaras;aux++){//Inicio o vetor posicaoUltrapass recebendo o numero de cada uma na ordem inicial;
		posicaoUltrapass[aux][1]=v[aux].numero;
	}
	for(aux=0;aux<numCapivaras;aux++){//Inicio o vetor posicaoUltrapass recebendo o numero de ultrapassagens cada uma;
		posicaoUltrapass[aux][2]=v[aux].ultrapass;
	}*/

	for(aux=0;aux<numCapivaras;aux++){
			printf("%d ", posicaoFinal[aux]);//Gera a impressao o da posicao final
	}
	printf("\n");
	/*for(aux=0;aux<numCapivaras;aux++){//Gera a impressao da posicao da ultrapassagem
			printf("%d ", posicaoUltrapass[aux][2]);
		}
	printf("\n");*/
	//ordemUltrapass(numCapivaras,posicaoUltrapass,v);//Chama o metodo para ordenar ultrapassagem

	printf("\n");
	return 0;
}


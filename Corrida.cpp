#include <stdio.h>

int main() {
    int i, n;
    int velocidades[100];

    scanf("%d", &n);

    /* guardamos as velocidades */
    for (i = 0; i < n; i++) {
        scanf("%d", &velocidades[i]);
    }
	// # descobrimos a velocidade limite para o evento
		duracao = int(input())
		if duracao == 1:
		    limite = 100
		elif duracao == 2:
		    limite = 20
		else:
		    limite = 10
		
	//	# calculamos a maior velocidade de lesmas qualificadas
		maxima = 0
		for v in velocidades:
		    if v > maxima and v <= limite:
		        maxima = v
		
	//	# imprime maior velocidade
		print(maxima)
}

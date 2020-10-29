#include <stdio.h>

int main(void) {
    float operando1, operando2;
    float resultado;
    char operador;
    int n;
	scanf("%d",&n);
	for(int n;n>0;n--){
    scanf("%f %c %f", &operando1, &operador, &operando2);
	if (operador == '-'){
		resultado = operando1 - operando2;
        printf("%.1f\n", resultado);
	}
	else if (operador == '+'){
		resultado = operando1 + operando2;
        printf("%.1f\n", resultado);
	}
	else if  (operador == '*'){
		resultado = operando1 * operando2;
        printf("%.1f\n", resultado);
	}
	
    else if  (operador == '/') {
        resultado = operando1 / operando2;
        printf("%.1f\n", resultado);
    } 
	
	else {
        printf("Erro: operador não reconhecido\n");
    }
    }
}

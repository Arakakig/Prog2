#include <stdio.h>
 
int main() {
 
	float salario,renda1,renda2,renda3,imposto;
	scanf("%f",&salario);
	if(salario<=2000)
		printf("Isento\n");
	else if(salario<=3000){
		renda1=salario-2000;
		imposto=0.08*renda1;
		printf("R$ %.2f\n",imposto);
	}
	else if(salario<=4500){
		renda1=1000;
		renda2=salario-(renda1+2000);
		imposto=(0.08*renda1)+(0.18*renda2);
		printf("R$ %.2f\n",imposto);
	}
	else{
		renda1=1000;
		renda2=1500;
		renda3=salario-(renda1+renda2+2000);
		imposto=(0.08*renda1)+(0.18*renda2)+(0.28*renda3);
		
		printf("R$ %.2f\n",imposto);
	}
    return 0;
}

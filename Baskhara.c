#include <stdio.h>
#include <math.h>
 
int main() {
 
	double a,b,c,d,x1,x2,raiz;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	d=((b*b)-4*a*c);
	
	
	if(d<0||a==0){
		printf("Impossivel calcular\n");
	}
	else{
		raiz = sqrt(d);
		x1=((-b+raiz)/(2*a));
		x2=((-b-raiz)/(2*a));
		printf("R1 = %.5lf\n",x1);
		printf("R2 = %.5lf\n",x2);
	}
			
	
   return 0;
}

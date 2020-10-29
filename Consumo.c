#include <stdio.h>

int main() {


char nome;

double Y, Z;
scanf("%s",&nome);
scanf("%lf %lf",&Y,&Z);

printf("TOTAL=R$%.2f",(Y+Z*0.15));

return 0;

}

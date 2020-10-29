#include <stdio.h>
 
int main() {
 	float a,b,c,d,media,notaexame;
 	scanf("%f %f %f %f",&a,&b,&c,&d);
 	media = (2*a+3*b+4*c+1*d)/10;
 	 printf("Media: %.1f\n", media);
 	if(media>=7)
 	printf("Aluno aprovado.",media);
 	else if(media>=5.0){
 		 printf("Aluno em exame.\n");
		 scanf("%f",&notaexame);
		 printf("Nota do exame: %.1f\n",notaexame);
		 if((notaexame+media)/2>5.0)
		 	printf("Aluno aprovado.\n");
		 else
		 	printf("Aluno reprovado.\n");
		printf("Media Final: %.1f\n",(media+notaexame)/2);
	 }
	 else
	 	printf("Aluno reprovado.\n");
 
    return 0;
}

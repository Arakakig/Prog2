
int main() {
  int n;
  float P[MAX_ALUNOS];
  float T[MAX_ALUNOS];
  float maximop, maximot,mediap,mediat;

  scanf("%d", &n);
  for(int i=0;i<n;i++){
  	for(int a=0;a<3;a++){
  		scanf("%f",&P[a]);
		  }
  	for(int b=0;b<2;b++){
  		scanf("%f",&T[b]);
	  }
  }
  
  
    
  printf("Max P: %.1f\n", obter_maximo(P,n));
  printf("Max T: %.1f\n", obter_maximo(T,n));
  printf("Media P: %.1f\n", obter_media(P, n));
  printf("Media T: %.1f\n", obter_media(T, n));
    
  return 0;
}

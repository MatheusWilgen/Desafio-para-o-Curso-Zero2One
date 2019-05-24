//Problema para o curso

#include <stdio.h>
void ordenacao(int vetor[],char vet[], int n);

int main(void){
  
  FILE *p;
  p = fopen("texto.txt","r");
  char aux,texto[3181], alfabeto[37] = "abcdefghijklmnopqrstuvwxyz_0123456789";
  int vet[37];
  
  if(!p)
      return (printf("erro ao abrir arq"));
  
  int j=0;
  while(fscanf(p,"%c",&aux) != EOF){
      texto[j] = aux;
      j++;
  }
  for(int i=0; i<37; i++){
      for(int j=0; j<3181; j++){
          if(alfabeto[i]==texto[j])
              vet[i] += 1;
      }
  }
  
  ordenacao(vet, alfabeto, 37);
  printf("%s\n",alfabeto);
  for(int i=0; i<38; i++){
    printf("\n%c = %d",alfabeto[i],vet[i]);
  }
   return 0;
}
  
  
  void ordenacao(int vetor[],char vet[], int n) {
      int k, j, aux;
      char aux2;
      
      for (k = 1; k < n; k++) {
          for (j = 0; j < n - 1; j++) {
              if (vetor[j] > vetor[j + 1]) {
                aux2         = vet[j];  
                aux          = vetor[j];
                vet[j]       = vet[j+1];
                vetor[j]     = vetor[j + 1];
                vet[j+1]     = aux2;
                vetor[j + 1] = aux;
              }
          }
      }
  }

  
 

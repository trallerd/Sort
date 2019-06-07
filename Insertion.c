#include <math.h> 
#include <stdio.h> 
  
int main(){

    int vetor[15];
    int i, key, j;

    printf("Digite 15 Numeros:\n");
      for(i=0;i<15;i++){
        scanf("%i",&vetor[i]);
      } 
      for (i = 1; i < 15; i++) { 
          key = vetor[i]; 
          j = i - 1; 

          while (j >= 0 && vetor[j] > key) { 
              vetor[j + 1] = vetor[j]; 
              j = j - 1; 
          } 
          vetor[j + 1] = key; 
      } 
      for (i = 0; i < 15; i++){
        printf("%d ", vetor[i]); 
        printf("\n"); 
      }
}
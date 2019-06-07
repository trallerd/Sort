#include <math.h> 
#include <stdio.h> 
  
int main(){

    int vetor[15];
    int i, min,aux, j;

    printf("Digite 15 Numeros:\n");
      for(i=0;i<15;i++){
        scanf("%i",&vetor[i]);
      } 

        for (i = 0; i < (15 - 1); i++) {
          min = i;
            for (j = i+1; j < 15; j++) {
              if (vetor[j] < vetor[min]) {
                min = j;
              }
            }
            if (i != min) {
              aux = vetor[i];
              vetor[i] = vetor[min];
              vetor[min] = aux;
            }
        }  
        printf("ORDENAÇÃO: \n");  
          

      for (i = 0; i < 15; i++){
        printf("%d / ", vetor[i]); 
      }
      printf("\n");
}


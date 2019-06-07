#include <stdio.h>
#include <stdlib.h>
#define TAM 7

int main(){
  int vetor[TAM],x = 0,y = 0,aux = 0;      
  
  for( x = 0; x < TAM; x++ ) {
    printf("Entre com um inteiro para vetor[%d]: ",x);
    scanf("%d",&aux);
    vetor[x] = aux;
  }  
  for( x = 0; x < TAM; x++ )  {
    for( y = x + 1; y < TAM; y++ ){ 
         if ( vetor[x] > vetor[y] ){
         aux = vetor[x];
         vetor[x] = vetor[y];
         vetor[y] = aux;
      }
    }
  } 
  
  printf("Elementos ordenados (Crescente):\n");
  
  for( x = 0; x < TAM; x++ ){
    printf("vetor[%d] = %d\n",x,vetor[x]);
  }  
  
   
  return 0;
} 
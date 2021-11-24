#include <stdio.h>
#include <stdlib.h>
// Funcao que realiza a comparacao entre dois valores do tipo ponteiro para const void
int comparar(const void * a, const void * b){
  if ( *(float*)a <  *(float*)b ) return 1; // retorna 1 caso o primeiro numero seja menor que o segundo
  if ( *(float*)a == *(float*)b ) return 0; // retorna 0 em caso de igualdade de valores
  if ( *(float*)a >  *(float*)b ) return -1; // retorna -1 em caso do primeiro numero ser maior que o segundo
}

// Funcao principal
int main(){
  int i, n; // declara as variaveis controadoras da quantidade de numeros digitados i e n
  float *x; // declara o ponteiro para float x que irah armazenar nos respectivos endereços de memória reservados os numeros digitados pelo usuario
  printf("Quantos numeros que voce deseja digitar? ");
  scanf("%d", &n); // recebe a quantidade de numeros que o usuario deseja digitar
  x = malloc(n * sizeof(float)); // utilizacao da funcao malloc para alocacao dinamica de x, considerando a quantidade de n numeros digitados
  for(i = 0; i < n; i++){ // laco para recebimento dos n valores nos enderecos de x
    printf("Numero %d: ", i);
    scanf("%f", &x[i]);
  }
  printf("--> Numeros digitados: \n");
  for(i = 0; i < n; i++){ // impressao dos conteudos armazenados nas n posicoes de x desordenados
    printf("%.1f ", x[i]);
  }
  qsort(x, n, sizeof(float), comparar); // utilização da funcao qsort com parametros: x, n, tamanho dos valores (utilizando a funcao sizeof) e nome da funfuncao utilizada para comparacao
  printf(" \n--> Numeros ordenados: \n");
  for(i = 0; i < n; i++){ // laco para impressao dos n valores de modo ordenado
    printf("%.1f ", x[i]);
  }
  free(x); // utilizacao da funcao free para liberacao das posicoes de memoria reservadas pela funcao malloc.
  return 0;
} // FIM DO CODIGO
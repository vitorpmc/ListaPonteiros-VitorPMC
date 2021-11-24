/* Questao 15
#include <stdio.h>
#include <stdlib.h>
// Funcao que realiza a comparacao entre dois valores do tipo ponteiro para const void
int comparar(const void * a, const void * b){
  if ( *(float*)a <  *(float*)b ) return -1; // retorna 1 caso o primeiro numero seja menor que o segundo
  if ( *(float*)a == *(float*)b ) return 0; // retorna 0 em caso de igualdade de valores
  if ( *(float*)a >  *(float*)b ) return 1; // retorna -1 em caso do primeiro numero ser maior que o segundo
}

float myqsort(float *p, int quant, int (*comp)(const void *, const void *)){ // funcao personalizada de ordenacao
  comp = &comparar; // atribui o ponteiro para funcao ao endereco que a funcao comoarar ocupa
  float temp = 0; // inicializa variavel temporaria de comparacao em 0
  for(int i = 1; i < quant; i++){ // laco para percorrer as variaveis i
    for(int j = 0; j < quant; j++){ // laco para percorrer as variaveis j enquanto as i estao  fixas
      if ((comp)(&p[i], &p[j]) == -1){ // verifica se os numeros comparados pela funcao comparar (apontados pelo ponteiro comp) estao em ordem decrescente
      //  realiza a troca dos conteudos diretamente nos enderecos de memoria
        temp = p[i];
        p[i] = p[j];
        p[j] = temp;
      }
    }
  }
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
  myqsort(x, n, comparar); // utilização da funcao qsort personalizada com parametros: x, n, tamanho dos valores (utilizando a funcao sizeof) e nome da funfuncao utilizada para comparacao
  printf(" \n--> Numeros ordenados: \n");
  for(i = 0; i < n; i++){ // laco para impressao dos n valores de modo ordenado
    printf("%.1f ", x[i]);
  }
  free(x); // utilizacao da funcao free para liberacao das posicoes de memoria reservadas pela funcao malloc.
  return 0;
} // FIM DO CODIGO
*/
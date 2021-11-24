/* Questao 20

>>> Link para acessar as capturas de tela com as testagens em sistema linux:
https://drive.google.com/file/d/1Z4Lu09-tCJ1iEN7vR6xrKdHu-BZ9xQ2u/view?usp=sharing

>>> CODIGO COMPARAR TEMPO DE EXECUCAO COM MALLOC TRADICIONAL E O PROVENIENTE DA BIBLIOTECA LIBGC

#include <stdio.h>
#include "gc.h" // importa a biblioteca libgc
#include <stdlib.h>
#include <time.h>

int comparar(const void * a, const void * b){
  if ( (float*)a <  (float*)b ) return 1; // retorna 1 em caso do primeiro numero ser menor que o segundo
  if ( (float*)a == (float*)b ) return 0; // retorna 1 em caso dos dois serem iguais
  if ( (float*)a >  (float*)b ) return -1; // retorna -1 em caso do primeiro numero ser maior que o segundo
}
// Funcao principal
int main(){
  int i, n; // declara as variaveis de controle de numeros digitados i e n
  float initT1, finalT1, initT2, finalT2, *x, *y; // declara os ponteiros para inteiro x e y que irao apontar para os valores digitados pelo usuario e a variavel de armazenamento temporario dos valores digitados pelo usuario t, bem como as vairaveis que irao registrar o inicio e final das contagens de tempo 1 e 2
  printf("Quantos numeros que voce deseja digitar? ");
  scanf("%d", &n); // le a quantidade de numeros desejados pelo usuario
  initT1 = clock(); // variavel de registro do inicio de tempo de execucao 1 recebe numero de ciclo presente
  x = GC_MALLOC(n * sizeof(float)); // realiza a alocacao dinamica propria da biblioteca libgc, que apenas necessita do malloc e realiza a liberacao de memoria automaticamente
  initT2 = clock(); // variavel de registro do inicio de tempo de execucao 2 recebe numero de ciclo presente
  y = malloc(n * sizeof(float)); // realiza a alocacao dinamica tradicional
  for(i = 0; i < n; i++){ // laco para leitura dos numeros digitados pelo usuario
    printf("Numero %d: ", i);
    scanf("%f", &x[i]);
    y[i] = x[i];
  }
  printf("--> Numeros digitados: \n");
  for(i = 0; i < n; i++){ // laco para impressao dos numeros alocados dinamicamente na ordem digitada pelo usuario
    printf("%.1f ", x[i]);
  }
  qsort(x, n, sizeof(float), comparar); 
  printf(" \n--> Numeros ordenados em ordem decrescente: \n");
  for(i = 0; i < n; i++){ // laco para impressao dos numeros alocados dinamicamente na ordem decrescente
    printf("%.1f ", x[i]);
  }
  free(y);
  finalT1 = clock();
  finalT2 = clock();
  printf("\nTempo de execucao1 = %.10f segundos", (finalT1 - initT1)/CLOCKS_PER_SEC);
  printf("\nTempo de execucao2 = %.10f segundos", (finalT2 - initT2)/CLOCKS_PER_SEC);
  printf("\nAtraso do coletor de lixo = %.10f segundos\n", ((finalT1 - initT1)/CLOCKS_PER_SEC)-((finalT2 - initT2)/CLOCKS_PER_SEC));
  return 0;
} // FIM DO CODIGO 

*/
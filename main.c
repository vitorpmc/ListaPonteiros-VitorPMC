#include <stdio.h>
#include <stdlib.h>

int comparar(const void * a, const void * b){
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

int main(){
  int i, n;
  float *x;
  printf("Quantos numeros que voce deseja digitar? ");
  scanf("%d", &n);
  x = malloc(3 * sizeof(int));
  for(i = 0; i < n; i++){
    printf("Numero %d: ", i);
    scanf("%f", &x[i]);
  }
  printf("--> Numeros digitados: \n");
  for(i = 0; i < n; i++){
    printf("%.1f ", x[i]);
  }
  qsort(x, n, sizeof(int), comparar);
  printf(" \n--> Numeros ordenados: \n");
  for(i = 0; i < n; i++){
    printf("%.1f ", x[i]);
  }
  free(x);
  return 0;
}
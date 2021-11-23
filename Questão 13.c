/* Questao 13
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * ordenar(int tam, float *a){
  float temp = 0;
  for(int i = 1; i < tam; i++){
    for(int j = 0; j < tam; j++){
      if (a[i] < a[j]){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main(){
  float initT, finalT, *x;
  initT = clock();
  int i, n;
  printf("Quantos numeros que voce deseja digitar? ");
  scanf("%d", &n);
  x = malloc(3 * sizeof(float));
  for(i = 0; i < n; i++){
    printf("Numero %d: ", i);
    scanf("%f", &x[i]);
  }
  printf("--> Numeros digitados: \n");
  for(i = 0; i < n; i++){
    printf("%.1f ", x[i]);
  }
  ordenar(n, x);
  finalT = clock();
  printf(" \n--> Numeros ordenados: \n");
  for(i = 0; i < n; i++){
    printf("%.1f ", x[i]);
  }
  free(x);
  printf("\nTempo de execucao = %.10f", (finalT - initT)/CLOCKS_PER_SEC);
  return 0;
}
*/
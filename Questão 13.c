/* Questão 13
#include <stdio.h>
#include <stdlib.h>


int * ordenar(int tam, int *a){
  int temp = 0;
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
  int i, n, *x;
  printf("Quantos numeros que voce deseja digitar? ");
  scanf("%d", &n);
  x = malloc(3 * sizeof(int));
  for(i = 0; i < n; i++){
    printf("Numero %d: ", i);
    scanf("%d", &x[i]);
  }
  printf("--> Numeros digitados: \n");
  for(i = 0; i < n; i++){
    printf("%d ", x[i]);
  }
  ordenar(n, x);
  printf(" \n--> Numeros ordenados: \n");
  for(i = 0; i < n; i++){
    printf("%d ", x[i]);
  }
  free(x);
  return 0;
}
*/
/* Questao 19

>>> Link para acessar captura de tela com a testagem em sistema linux:
https://drive.google.com/file/d/1FyNx6jTzyRLbYFr8fKOUTIacseoXju3J/view?usp=sharing

>>> CODIGO UTILIZADO

#include <stdio.h>
#include "gc.h" // importa a biblioteca libgc
#include <stdlib.h>

int comparar(const void * a, const void * b){
  if ( (float)a <  (float)b ) return 1; // retorna 1 em caso do primeiro numero ser menor que o segundo
  if ( (float)a == (float)b ) return 0; // retorna 1 em caso dos dois serem iguais
  if ( (float)a >  (float)b ) return -1; // retorna -1 em caso do primeiro numero ser maior que o segundo
}
// Funcao principal
int main(){
  int i, n; // declara as variaveis de controle de numeros digitados i e n
  float *x; // declara o ponteiro para inteiro x que irah apontar para os valores digitados pelo usuario
  printf("Quantos numeros que voce deseja digitar? ");
  scanf("%d", &n); // le a quantidade de numeros desejados pelo usuario
  x = GC_MALLOC(n * sizeof(float)); // realiza a alocacao dinamica propria da biblioteca libgc, que apenas necessita do malloc e realiza a liberacao de memoria automaticamente
  for(i = 0; i < n; i++){ // laco para leitura dos numeros digitados pelo usuario
    printf("Numero %d: ", i);
    scanf("%f", &x[i]);
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
  return 0;
} // FIM DO CODIGO

*/
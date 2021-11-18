/* A grande vantagem de se aplicar ponteiros a funções
é que, a partir dessa técnica, o programa passa a editar
os valores das variáveis em suas posições originais na
memória, e não somente editar uma cópia do valor dessa
variável, como normalmente é feito pelas funções, sem o
uso de ponteiros. Um exemplo de programa que aplica a 
técnica citada é o presente nas linhas de código a 
seguir, cuja principal funcionalidade é triplicar o valor 
de duas variáveis :

#include <stdio.h>
void triplicar (int *a, int *b) {
  *a = 3**a;
  *b = 3**b;
}
int main() {
  int x = 15;
  int y = 30;
  printf("x eh %d, y eh %d\n", x, y);
  triplicar(&x, &y);
  printf("x eh %d, y eh %d\n", x, y);
  return 0;
}

*/
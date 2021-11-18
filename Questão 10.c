/* Questão 10

--> Se x for declarado como char:
x + 1 = 4093, x + 2 = 4094 e x + 3 = 4095;
-> Programa:
#include <stdio.h>

int main(){
  char x[4] = {1, 2, 3, 4};
  char *p;
  p = &x;
  for(int i = 1, i <= 3, i++){
    printf("Endereço de x + %d = %x\n", i, p + i);
  }
  return 0;
}

--> Se x for declarado como int:
x + 1 = 4094, x + 2 = 4096 e x + 3 = 4098;
-> Programa:
#include <stdio.h>

int main(){
  short int x[4] = {1, 2, 3, 4};
  short int *p;
  p = &x;
  for(int i = 1, i <= 3, i++){
    printf("Endereço de x + %d = %x\n", i, p + i);
  }
  return 0;
}

--> Se x for declarado como float:
x + 1 = 4096, x + 2 = 4100 e x + 3 = 4104;
-> Programa:
#include <stdio.h>

int main(){
  float x[4] = {1, 2, 3, 4};
  float *p;
  p = &x;
  for(int i = 1, i <= 3, i++){
    printf("Endereço de x + %d = %x\n", i, p + i);
  }
  return 0;
}

--> Se x for declarado como double:
x + 1 = 4100, x + 2 = 4108 e x + 3 = 4116;
-> Programa:
#include <stdio.h>

int main(){
  double x[4] = {1, 2, 3, 4};
  double *p;
  p = &x;
  for(int i = 1, i <= 3, i++){
    printf("Endereço de x + %d = %x\n", i, p + i);
  }
  return 0;
}*/
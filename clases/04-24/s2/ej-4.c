#include <stdio.h>

int main() {
  int i, suma, elementos[10];

  elementos[0] = 12;
  elementos[1] = 2;
  elementos[2] = 4;
  elementos[3] = 7;
  elementos[4] = 5;
  elementos[5] = 19;
  elementos[6] = 11;
  elementos[7] = 14;
  elementos[8] = 3;
  elementos[9] = 10;

  for (i = 0; i < 10; i++) {
    suma += elementos[i];
  }

  printf("la suma de todos los numeros es %i", suma);

  return 0;
}

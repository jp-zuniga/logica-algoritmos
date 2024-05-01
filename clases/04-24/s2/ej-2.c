// arreglo de floats

#include <stdio.h>

int main() {
  float arreglo[7];
  arreglo[0] = 4.4;
  arreglo[1] = 28.1;
  arreglo[2] = 10.7;
  arreglo[3] = 9.312;
  arreglo[4] = 1.414;

  printf("\nnumeros almacenados:\n");
  printf("elemento 1: %.2f\n", arreglo[0]);
  printf("elemento 2: %.2f\n", arreglo[1]);
  printf("elemento 3: %.2f\n", arreglo[2]);
  printf("elemento 4: %.2f\n", arreglo[3]);
  printf("elemento 5: %.2f\n", arreglo[4]);

  return 0;
}

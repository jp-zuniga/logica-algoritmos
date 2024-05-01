#include <math.h>
#include <stdio.h>

int main() {
  int num, cubo;

  printf("dame un numero: ");
  scanf("%i", &num);

  cubo = pow(num, 3);

  printf("el cubo de %i es %i.\n", num, cubo);
  printf("fin...");

  return 0;
}

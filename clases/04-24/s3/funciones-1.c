// producto de dos numeros

#include <stdio.h>

int producto(int num1, int num2) { return num1 * num2; }

void pantalla() {
  int n1, n2, mult;

  printf("digita primer numero:\n");
  scanf("%i", &n1);
  printf("digita segundo numero:\n");
  scanf("%i", &n2);

  mult = producto(n1, n2);

  printf("%d * %d = %d\n", n1, n2, mult);
}

int main() {
  pantalla();

  return 0;
}

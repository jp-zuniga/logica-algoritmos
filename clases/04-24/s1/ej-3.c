// leer un numero y decir si es par o impar

#include <stdio.h>

int main() {
  int num;

  printf("dame un numero: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    // system("color a1");
    printf("el numero %d es par.\n", num);
  } else {
    // system("color e2");
    printf("el numero %d es impar.\n", num);
  }

    return 0;
}

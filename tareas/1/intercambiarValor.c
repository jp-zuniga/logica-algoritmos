#include <stdio.h>

void intercambio(float num1, float num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;

  printf("el nuevo valor del numero 1 es %.2f, y el nuevo valor del numero 2 "
         "es %.2f\n\n",
         num1, num2);
}

int main() {
  int opcion;
  float num1, num2;

  // menu
  printf("1. Intercambiar valores\n");
  printf("2. Salir\n");
  printf("Escoga: \n");
  scanf("%i", &opcion);

  // function calls
  switch (opcion) {
  case 1:
    printf("numero 1:\n");
    scanf("%f", &num1);
    printf("numero 2:\n");
    scanf("%f", &num2);

    printf("antes de intercambiar, el valor del numero 1 era %.2f y el valor "
           "del numero 2 era %.2f\n\n",
           num1, num2);

    intercambio(num1, num2);
    break;
  case 2:
    break;
  default:
    printf("opcion invalida...\n\n");
    break;
  }

  // reiniciar menu
  if (opcion != 2) {
    main();
  }
}

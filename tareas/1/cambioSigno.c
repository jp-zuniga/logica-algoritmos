#include <stdio.h>

void cambiarSigno(float num) {
  float numCambiado = -1 * num;

  printf("su numero con el signo cambiado es: %.1f\n\n", numCambiado);
}

int main() {
  int opcion;
  float num;

  // menu
  printf("1. Cambiar signo\n");
  printf("2. Salir\n");
  printf("Escoga: \n");
  scanf("%i", &opcion);

  // function calls
  switch (opcion) {
  case 1:
    printf("cual es el numero?\n");
    scanf("%f", &num);
    cambiarSigno(num);
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

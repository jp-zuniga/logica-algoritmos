#include <stdio.h>

void centPulgadas(float cent) {
  float pulgadas = cent * 0.3937;

  printf("%.2f centimetros son %.2f en pulgadas\n\n", cent, pulgadas);
}

void pulgadasCent(float pulgadas) {
  float cent = pulgadas * 2.54;

  printf("%.2f pulgadas son %.2f en centimetros\n\n", pulgadas, cent);
}

int main() {
  int opcion;
  float cent, pulgadas;

  // menu
  printf("1. Convertir de centimetros a pulgadas\n");
  printf("2. Convertir de pulgadas a centimetros\n");
  printf("3. Salir\n");
  printf("Escoga: \n");
  scanf("%i", &opcion);

  // function calls
  switch (opcion) {
  case 1:
    printf("cuanto es la medida en centimetros?\n");
    scanf("%f", &cent);
    centPulgadas(cent);
    break;
  case 2:
    printf("cuanto es la medida en pulgadas?\n");
    scanf("%f", &pulgadas);
    pulgadasCent(pulgadas);
    break;

  case 3:
    break;
  default:
    printf("opcion invalida...\n\n");
    break;
  }

  // reiniciar menu
  if (opcion != 3) {
    main();
  }
}

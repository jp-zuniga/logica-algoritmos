#include <stdio.h>

void kilos_metros(float kilos) {
  float metros = kilos * 1000;

  printf("%.2f kilometros equivale a %.2f metros\n\n", kilos, metros);
}

void metros_kilos(float metros) {
  float kilos = metros * 0.001;

  printf("%.2f metros equivale a %.2f kilometros\n\n", metros, kilos);
}

int main() {
  int opcion;
  float kilos, metros;

  // menu
  printf("1. Convertir kilometros a metros\n");
  printf("2. Convertir metros a kilometros\n");
  printf("3. Salir\n");
  printf("Escoga: \n");
  scanf("%i", &opcion);

  // function calls
  switch (opcion) {
  case 1:
    printf("cuanto mide la distancia en kilometros?\n");
    scanf("%f", &kilos);
    kilos_metros(kilos);
    break;
  case 2:
    printf("cuanto mide la distancia en metros?\n");
    scanf("%f", &metros);
    metros_kilos(metros);
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

#include <stdio.h>

void millasMetros(float millas) {
  float metros = millas * 1609.34;

  printf("%.2f millas equivale a %.3f metros\n\n", millas, metros);
}

void metrosMillas(float metros) {
  float millas = metros * 0.00062;

  printf("%.2f metros equivale a %.3f millas\n\n", metros, millas);
}

int main() {
  int opcion;
  float millas, metros;

  // menu
  printf("1. Convertir millas a metros\n");
  printf("2. Convertir metros a millas\n");
  printf("3. Salir\n");
  printf("Escoga: \n");
  scanf("%i", &opcion);

  // function calls
  switch (opcion) {
  case 1:
    printf("cuanto mide la distancia en millas?\n");
    scanf("%f", &millas);
    millasMetros(millas);
    break;
  case 2:
    printf("cuanto mide la distancia en metros?\n");
    scanf("%f", &metros);
    metrosMillas(metros);
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

#include <stdio.h>

void area(float base, float altura) {
  float area = base * altura;

  printf("el area de un rectangulo con base %.2f y altura %.2f es: %.2f\n\n",
         base, altura, area);
}

void perimetro(float base, float altura) {
  float perimetro = (2 * base) + (2 * altura);

  printf(
      "el perimetro de un rectangulo con base %.2f y altura %.2f es: %.2f\n\n",
      base, altura, perimetro);
}

int main() {
  int opcion;
  float base, altura;

  // menu
  printf("1. Calcular area\n");
  printf("2. Calcular perimetro\n");
  printf("3. Salir\n");
  printf("Escoga: \n");
  scanf("%i", &opcion);

  // function calls
  switch (opcion) {
  case 1:
    printf("cuanto mide la base?\n");
    scanf("%f", &base);
    printf("cuanto mide la altura?\n");
    scanf("%f", &altura);
    area(base, altura);
    break;
  case 2:
    printf("cuanto mide la base?\n");
    scanf("%f", &base);
    printf("cuanto mide la altura?\n");
    scanf("%f", &altura);
    perimetro(base, altura);
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

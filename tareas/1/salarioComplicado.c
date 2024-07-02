#include <stdio.h>

void salario(int horas) {
  float pago = 0;

  if (horas <= 160) {
    pago = horas * 6.5;
  } else if (horas > 160) {
    pago += 160 * 6.5;
    pago += (horas - 160) * 7.5;
  }

  printf("su salario total despues de trabajar %i horas es: %.2f\n\n", horas,
         pago);
}

int main() {
  int opcion, horas;

  // menu
  printf("1. Calcular salario\n");
  printf("2. Salir\n");
  printf("Escoga: \n");
  scanf("%i", &opcion);

  // function calls
  switch (opcion) {
  case 1:
    printf("cuantas horas trabajo?\n");
    scanf("%i", &horas);
    salario(horas);
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

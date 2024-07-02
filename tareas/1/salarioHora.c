#include <stdio.h>

void calcular(int horas, float salario) {
  float total = horas * salario;

  printf("su salario total es %f\n\n", total);
}

int main() {
  int opcion, horas;
  float salario;

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
    printf("cuanto es su salario por hora?\n");
    scanf("%f", &salario);
    calcular(horas, salario);
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

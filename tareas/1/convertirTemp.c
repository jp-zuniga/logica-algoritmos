#include <stdio.h>

void fahr_a_celsius(float fahr) {
  float celsius = (fahr - 32) * 5 / 9;

  printf("%.2f fahrenheit es igual a %.2f celsius\n\n", fahr, celsius);
}

void celsius_a_fahr(float celsius) {
  float fahr = (celsius * 9 / 5) + 32;

  printf("%.2f celsius es igual a %.2f fahrenheit\n\n", celsius, fahr);
}

int main() {
  int opcion;
  float temp;

  // menu
  printf("1. Convertir de fahrenheit a celsius\n");
  printf("2. Convertir de celsius a fahrenheit\n");
  printf("3. Salir\n");
  printf("Escoga: \n");
  scanf("%i", &opcion);

  // function calls
  switch (opcion) {
  case 1:
    printf("cuanto es la temperatura en fahrenheit?\n");
    scanf("%f", &temp);
    fahr_a_celsius(temp);
    break;
  case 2:
    printf("cuanto es la temperatura en celsius?\n");
    scanf("%f", &temp);
    celsius_a_fahr(temp);
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

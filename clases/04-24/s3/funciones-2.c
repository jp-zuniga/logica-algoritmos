// leer la edad de una persona y decir si
// es niño (<13), joven (>=13) o adulto (>=21)

#include <stdio.h>

void evaluarEdad(int edad) {
  if (edad >= 0 && edad < 13)
    printf("sos niño\n\n");
  else if (edad >= 13)
    printf("sos joven\n\n");
  else if (edad >= 21)
    printf("sos adulto .<.\n\n");
  else
    printf("edad invalida...\n\n");
}

int main() {
  int opcion, edad;

  printf("1. Evaluar edad\n");
  printf("2. Salir\n");
  printf("Escoga: \n");
  scanf("%i", &opcion);

  switch (opcion) {
  case 1:
    printf("cual es su edad?\n");
    scanf("%i", &edad);
    evaluarEdad(edad);
    break;
  case 2: {
    break;
  }
  default:
    printf("opcion invalida...\n\n");
  }

  if (opcion != 2) {
    main();
  }

  return 0;
}

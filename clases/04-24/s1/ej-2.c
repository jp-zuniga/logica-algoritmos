// leer el nombre y apellido de una persona, e imprimir el nombre completo

#include <stdio.h>

int main() {
  char nombre[30];
  char apellido[30];

  printf("cual es tu nombre?");
  scanf("%s", nombre);
  printf("cual es tu apellido?");
  scanf("%s", apellido);
  printf("tu nombre completo es %s %s.\n", nombre, apellido);

  return 0;
}

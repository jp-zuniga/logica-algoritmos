#include <stdio.h>

// funciones
void suma(int num1, int num2) {
  int out = num1 + num2;

  printf("la suma de %i y %i es igual a %i\n\n", num1, num2, out);
}

void resta(int num1, int num2) {
  int out = num1 - num2;

  printf("la resta de %i y %i es igual a %i\n\n", num1, num2, out);
}

void mult(int num1, int num2) {
  int out = num1 * num2;

  printf("el producto de %i y %i es igual a %i\n\n", num1, num2, out);
}

void div(int num1, int num2) {
  float out = num1 / num2;

  printf("el cociente de %i y %i es igual a %f\n\n", num1, num2, out);
}

int main() {
  int opcion, num1, num2;

  // menu
  printf("1. Sumar dos numeros enteros\n");
  printf("2. Restar dos numeros enteros\n");
  printf("3. Multiplicar dos numeros enteros\n");
  printf("4. Dividir dos numeros enteros\n");
  printf("5. Salir\n");
  printf("Escoga: \n");
  scanf("%i", &opcion);

  // function calls
  switch (opcion) {
  case 1:
    printf("primer numero: \n");
    scanf("%i", &num1);
    printf("segundo numero: \n");
    scanf("%i", &num2);
    suma(num1, num2);
    break;
  case 2:
    printf("primer numero: \n");
    scanf("%i", &num1);
    printf("segundo numero: \n");
    scanf("%i", &num2);
    resta(num1, num2);
    break;
  case 3:
    printf("primer numero: \n");
    scanf("%i", &num1);
    printf("segundo numero: \n");
    scanf("%i", &num2);
    mult(num1, num2);
    break;
  case 4:
    printf("primer numero: \n");
    scanf("%i", &num1);
    printf("segundo numero: \n");
    scanf("%i", &num2);
    div(num1, num2);
    break;

  case 5:
    break;
  default:
    printf("opcion invalida...\n\n");
    break;
  }

  // reiniciar menu
  if (opcion != 5) {
    main();
  }
}

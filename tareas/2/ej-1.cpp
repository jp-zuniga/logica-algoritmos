// Escribe un programa que solicite al usuario un número entero positivo
// y luego imprima todos los números desde 1 hasta ese número.

#include <iostream>

using namespace std;

int main() {
  int num;

  cout << "ingresar un numero entero positivo: ";
  cin >> num;

  int i = 1;

  if (i > 0) {
    while (i <= num) {
      cout << i << endl;
      i++;
    }
  } else {
    cout << "el numero ingresado no es positivo.";
  }

  cout << endl;

  return 0;
}

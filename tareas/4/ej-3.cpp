// Escriba el programa para calcular la suma de los cuadrados de los números
// entre 1 y 100.

#include <iostream>

using namespace std;

int main() {
  int suma = 0;

  for (int i = 0; i <= 100; i++) {
    suma += i ^ 2;
  }

  cout << "la suma de los cuadrados de todos los numeros entre 1 y 100 es "
       << suma << endl;

  return 0;
}
